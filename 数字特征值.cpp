#include <stdio.h>
#include <math.h>
int main()
{
  int num;
  int single;
  int count=1;
  int sum=0;
  int sumi=0;
  
  scanf("%d",&num);
  while(num > 9)
  {
  	
   single=num%10;	
  
   if(single%2==0 && count%2==0 || single%2==1 && count%2==1 ){
   	sum=sum+pow(2,sumi);
   }
   
   num = num/10;
   count = count + 1;
   sumi  = sumi + 1;
  
   } 
 
 if(num%2==0 && count%2==0 || num%2==1 && count%2==1 ){
   	
   	sum=sum+pow(2,sumi);
   	printf("%d\n",sum);

   }else{
   	printf("%d\n",sum);
   }
 
 
 
  return 0;
}

