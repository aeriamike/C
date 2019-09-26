#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>   

int main(){
	char s[10];
	gets(s);
	//printf("this is: %s\n",s);
	int b = strlen(s);
	//printf("number of string: %d\n",b);
	
	while(s!='0'){
	
			char *p;
			p = strtok(s,"/");
		
			while(p){
			printf("%s\n",p);
			p = strtok(NULL,"/");
		}
		gets(s);
	}
	
	
	
	}
	
	
	
	
	/* 
	while(s!='0'){
		int b = strlen(s);
		printf("number of string: %d\n",b);
	
		float um = atof(s);
		printf("%f\n",um);
		
		gets(s);
	}

	printf("end\n");
}
*/
