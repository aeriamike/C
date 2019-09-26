#include<stdio.h>
#include<stdlib.h>
/*  ????,?????????
  typedef struct PolyNode{
      int coef;
      int expon;
      struct PolyNode *Next;
  }*PolyNode;                      */
typedef struct PolyNode *Polynomial ;
struct PolyNode
{
    int coef;
    int expon;
    Polynomial Next;
};
/*????,???????,????,??*rear??????,????rear???(?)*/
void Attach(int coef,int expon,Polynomial *rear)
{
    Polynomial P;
    P=(Polynomial)malloc(sizeof(struct PolyNode));
    P->coef=coef;
    P->expon=expon;
    P->Next=NULL;
    (*rear)->Next=P;
    (*rear)=P;
}
   /* ??????*/
Polynomial ReadPoly()
{
    int N;
    int coef,expon;
    Polynomial P,rear,t;
    P=(Polynomial)malloc(sizeof(struct PolyNode));   //?????????P???
    P->Next=NULL;
    rear=P;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d %d",&coef,&expon);
        Attach(coef,expon,&rear);
    }
    t=P;
    P=P->Next;
    free(t);   //??????
    return P;
}
    /* ??????? */
Polynomial Add(Polynomial P1,Polynomial P2)
{
    Polynomial P,rear,t;
    P=(Polynomial)malloc(sizeof(struct PolyNode));   //?????
    P->Next=NULL;
    rear=P;   //  rear ??P
    int sum;
    while(P1 && P2)
    {
        if (P1->expon>P2->expon)                //??????????
        {
            Attach(P1->coef,P1->expon,&rear);   //??P1,P1??,????
            P1=P1->Next;
        }
       else if (P1->expon<P2->expon)
        {
            Attach(P2->coef,P2->expon,&rear);
            P2=P2->Next;
        }
        else
        {
            sum=P1->coef+P2->coef;
           if (sum) Attach(sum,P1->expon,&rear);  //??????0???,P1,P2????
            P1=P1->Next;
            P2=P2->Next;
        }
    }
    while (P1){Attach(P1->coef,P1->expon,&rear);P1=P1->Next;}  //??????????
    while (P2){Attach(P2->coef,P2->expon,&rear);P2=P2->Next;}
    t=P;
    P=P->Next;
    free(t);   //???????
    return P;
}
     /* ??????? */
Polynomial Mult(Polynomial P1,Polynomial P2)
{
    Polynomial P,rear,t1,t2,t;
    int c,e;
    if (!P1 || !P2)  return NULL;
    t1 = P1;
    t2 = P2;
    P = (Polynomial)malloc(sizeof(struct PolyNode));
    P->Next = NULL;
    rear = P;
    while(t2)   //???????,?P1???????P2??????
    {
        Attach(t1->coef * t2->coef,t1->expon + t2->expon,&rear);
        t2 = t2->Next;
    }
    t1=t1->Next;
    while (t1)    //?????????????,????????,?,????
   {
        t2 = P2;
        rear = P;
         while(t2)
          {
            e = t1->expon + t2->expon;
            c = t1->coef * t2->coef;
            while(rear->Next && rear->Next->expon>e )rear=rear->Next;  //!!!????&&??????????!
            if (rear->Next && rear->Next->expon==e)
            {
                if(rear->Next->coef+c)rear->Next->coef+=c;
                else{t=rear->Next;rear->Next=t->Next;free(t);}//?????
            }
            else  //<e, ?rear?????????
            {
                t=(Polynomial)malloc(sizeof(struct PolyNode));
                t->coef=c;
                t->expon=e;
                t->Next=rear->Next;
                rear->Next=t;
                rear=rear->Next;
            }
            t2=t2->Next;
       }
         t1=t1->Next;
  }
    t=P;
    P=P->Next;
    free(t);  //???????
    return P;
}
/* ???? */
void PrintPoly(Polynomial P)
{
    int flag=0;
    if(!P){printf("0 0\n");return;}
    while(P)
   {
       if (!flag)flag=1;   //????????,???????
       else printf(" ");
       printf("%d %d",P->coef,P->expon);
       P=P->Next;
   }
   printf("\n");
}
int main()
{
  Polynomial P1,P2,PP,PS;
  P1=ReadPoly();
  P2=ReadPoly();
  //PP=Mult(P1,P2);
  //PrintPoly(PP);
  PS=Add(P1,P2);
  PrintPoly(PS);
  return 0;
}
