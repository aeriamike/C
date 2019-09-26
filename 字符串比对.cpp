#include<stdio.h>
#include<string.h>
int main(){
	
	char a[10000];
	char b[10000];
	
	
	gets(a);
	gets(b);
	
//	printf("\n");
	
//	printf("%s\n",a);
//	printf("%s\n",b); 
	
//	printf("\n");
	
	int c = strlen(a);
//	printf("%d\n",c); 

	int d = strlen(b);
//	printf("%d\n",d); 
	
//	printf("\n");
	
	int i=0;
	int isit=0;
	while(i<d){
		
		
		
	//	printf("%c\n",b[i]); 
		
		int incount=i;
		int flag=1;
		
		for(int j=0;j<c;j++){
			
		//	printf("%c %c\n",b[incount],a[j]);
			if(b[incount]!=a[j]){
				flag=0;
				
			} 
			
			incount++;
		}
		
		if(flag==1){
			printf("%d ",i);
			isit=1;
		}
		
		
		printf("");
		i++;
	}

	
	
	if(isit==0){
		printf("-1\n");
	}
	return 0;
}
