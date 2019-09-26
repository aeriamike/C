#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

int num;
scanf("%d",&num);

char name[num];
char code[num];
int grade[num];

for(int i=0; i<num;++i){
	
	scanf("%c %c %d",&name[i],&code[i],&grade[i]);
	printf("%c %c %d\n",name[i],code[i],grade[i]);
	
}





printf("\n");
printf("%d\n",num);





return 0; 

	
	
}
