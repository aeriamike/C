#include<stdio.h>
#include<string.h> 
int main()
{ 

    char str[80];
	gets(str);
	
	int a;
	int b;
	int c=strlen(str);
	
	int k;
	
	for(int i=(strlen(str)-1);i>=0;i--){
		a=i;
	//	printf("%c\n",str[i]);
	//	printf("%d\n",a);
	//	printf("\n");
		if(str[i]==' '){
			
			
			
			b=i+1;
			
			for(b=b;b<=c-1;b++){
			
			if(str[b]==' '){
				break;
			}else{
				printf("%c",str[b]);
			}
		
		
			}
			printf(" ");			
		}
	}
	
	if(a==0){
				for(k=0;k<=c-1;k++){
					if(str[k]==' '){
							break;
					}else{
							printf("%c", str[k]);
					}
				}
			}
	//puts(str);	 


return 0;
}
