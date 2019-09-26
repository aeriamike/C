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

typedef Polynomial poly;

void Attach(int coef,int expon,poly *rear)
{
    poly P;
    P=(poly)malloc(sizeof(struct PolyNode));
    P->coef=coef;
    P->expon=expon;
    P->Next=NULL;
    (*rear)->Next=P;
    (*rear)=P;
}



poly ReadPoly()
{
    int N;
    int coef,expon;
    poly P,rear,t;
    P=(poly)malloc(sizeof(struct PolyNode));   
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
    free(t);   
    return P;
}
    
poly Add(poly P1,poly P2)
{
    poly P,rear,t;
    P=(poly)malloc(sizeof(struct PolyNode));  
    P->Next=NULL;
    rear=P;   
    int sum;
    while(P1 && P2)
    {
        if (P1->expon>P2->expon)                
        {
        
            poly P;
   		    P=(poly)malloc(sizeof(struct PolyNode));
            P->coef = P1->coef;
            P -> expon = P1->expon;
            P -> Next = NULL;
            (rear)->Next=P;
            (rear) = P;
            
            
            P1=P1->Next;
        }
       else if (P1->expon<P2->expon)
        {
           
           poly P;
   		   P=(poly)malloc(sizeof(struct PolyNode));
            
        	P -> coef = P2 -> coef;
        	P -> expon = P2 -> expon;
        	P -> Next = NULL;
        	(rear)->Next = P;
        	(rear) = P;
        	
            P2=P2->Next;
        }
        else
        {
            sum=P1->coef+P2->coef;
           if (sum) {
           	
           	poly P;
            P=(poly)malloc(sizeof(struct PolyNode));
           	
           	P->coef=sum;
    		P->expon=P1->expon;
    		P->Next=NULL;
    		(rear)->Next=P;
    		(rear)=P;
		   }
		   	
			 
            P1=P1->Next;
            P2=P2->Next;
        }
    }
    while (P1){
		
		    poly P;
            P=(poly)malloc(sizeof(struct PolyNode));
            P->coef = P1->coef;
            P -> expon = P1->expon;
            P -> Next = NULL;
            (rear)->Next=P;
            (rear) = P;
		P1=P1->Next;
		}  
    while (P2){
		Attach(P2->coef,P2->expon,&rear);
	 	poly P;
   		P=(poly)malloc(sizeof(struct PolyNode));
            
        	P -> coef = P2 -> coef;
        	P -> expon = P2 -> expon;
        	P -> Next = NULL;
        	(rear)->Next = P;
        	(rear) = P;
		P2=P2->Next;
		}
		
    t=P;
    P=P->Next;
    free(t);   
    return P;
}

    
void PrintPoly(poly P)
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
  poly P1,P2,PP,PS;
  P1=ReadPoly();
  P2=ReadPoly();
  
  PS=Add(P1,P2);
  PrintPoly(PS);
  return 0;
}
