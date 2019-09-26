#include<stdio.h>
#include<stdlib.h>

typedef struct TNode* Tree;
struct TNode
{
 int Key;
 int Node;
 Tree Left;
 Tree Right;
};

void inorder(Tree head,int* a);
void invisit(Tree head,int* a);

int anum=0;

int main (void)
{
	
	
 int num;
 int i,j;
 int f,l;
 int *a;
 int *n;
 int k;
 int min;
 int temp;
 
 
 Tree* head;
 Tree* level;
 
 
 scanf("%d",&num);
 
    head=(Tree*)calloc(sizeof(Tree*),(num));
    level=(Tree*)calloc(sizeof(Tree*),(num));
    
 for(i=0;i<num;i++)
 {
  head[i]=(Tree)malloc(sizeof(struct TNode));
  head[i]->Left=NULL;
  head[i]->Right=NULL;
  head[i]->Key=i;
 }
 
 for(i=0;i<num;i++)
 {
  scanf("%d%d",&l,&f);
  if(l!=-1)
   head[i]->Left=head[l];
  if(f!=-1)
   head[i]->Right=head[f];
 }
 
 a=(int*)calloc(sizeof(int),(num));
 inorder(head[0],a);
 anum--;
 n=(int*)calloc(sizeof(int),(num));
 
 for(i=0;i<num;i++)
 {
  scanf("%d",&k);
  n[i]=k;
 }
 
 for(j=0;j<num;j++)
 {
  min=j;
  for(i=j;i<num;i++)
  {
   if(n[i]<n[min])
    min=i;
  }
  temp=n[j];
  n[j]=n[min];
  n[min]=temp;
 }
 
 for(i=0;i<num;i++)
 {
  head[a[i]]->Node=n[i];
 }
 
 level[0]=head[0];
 f=0;
 l=1;
 
 while(f!=l)
 {
  if(level[f]->Left!=NULL)
  {
   level[l]=level[f]->Left;
   l++;
  }
  if(level[f]->Right!=NULL)
  {
   level[l]=level[f]->Right;
   l++;
  }
  f++;
 }
 printf("%d",level[0]->Node);
 
 for(i=1;i<num;i++)
 {
  printf(" %d",level[i]->Node);
 }
 return 0;
}


void inorder(Tree head,int* a)
{
 if(head==NULL)
  return ;
  inorder(head->Left,a);
  invisit(head,a);
  inorder(head->Right,a);
}


void invisit(Tree head,int* a)
{
 a[anum]=head->Key;
 anum++;
}
