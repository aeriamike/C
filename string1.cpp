#include<stdio.h>
#include<string.h>

int f(int a[], int n){
		int thi;
		int that;
		int i;
		int j;
		that = 0;
		for(i=0;i<n;i++){
			thi = 0;
			for(j=i;j<n;j++){
				thi += a[j];
				if(thi>that){
					that=thi;
				}
			}
			return that;
		}
	}
int main(){
	
	
	char hello[]={'H','e','l','l','o'};
	for(int i=0;i<strlen(hello);i++){
		printf("%c\n",hello[i]);
	}
	
	char *strings[]={"hello","world","my","friend"};
	for(int i=0;i<(sizeof(strings)/sizeof(strings[0]));i++){
		printf("%s\n",strings[i]);
	}
	
	char *s = "Hello, world!";
	printf("%s\n",s);
	//s[0]='B';
	//printf("%s\n",s);
	//printf("%c %c\n",s[0],s[3]);
	
	char a[]="Hello, world!";
	printf("%s\n",a);
	a[0]='B';
	printf("%s\n",a);
	printf("%c %c\n",a[0],a[3]);
	
	
	//strlen
	char line[]="Hello";
	printf("strlen=%lu\n",strlen(line));
	printf("sizeof=%lu\n",sizeof(line));
	//strcmp
	char *s1="abc";
	char *s2="bbc";
	printf("%d\n",strcmp(s1,s2));
	//strcpy
	char c1[]="dsfdf";
	char c2[]="hellodsafadad!!";
	printf("%s\n",strcpy(c1,c2));
	c2[6]='A';
	printf("%s\n",c2);
	//strcat
	char p1[]="vcbcxvb";
	char p2[]="adada";
	printf("%s\n",strcat(p1,p2));
	
	char ch[]="12ab56";
	int i;
	int ss = 0;
	
	for(i=0;ch[i]>='0' && ch[i]<='9'; i+=2){
		ss=10*ss+ch[i]-'0';
		printf("%d\n",ss);
		printf("ch[i]=%c\n",ch[i]);
		printf("'0'=%d\n",'0');
		
	}
	printf("%d\n",ss);
	
	
	int ass[2]={5,6};
	int t=ass[0];
	ass[0]=ass[1];
	ass[1]=t;
	printf("%d %d\n",ass[0],ass[1]);
	
	int ii;
	int j=4;
	for(ii=j;ii<=2*j;ii++){
		switch(i/j){
			case 0:
			case 1: printf("*"); break;
			case 2: printf("#"); break;
			
		}
	}
	printf("\n");
	int number, right_digit;
	
	number = 15292;
	
	if(number==0){
		printf("0");
	}else
	while(number!=0){
		right_digit = number%10;
		printf("%i", right_digit);
		number /=10;
		
	}
	printf("\n");
	
	for(int p=0;p<5;++p){
		printf("%d\n",p);
	}
	
	int aaa=2,b,c;
	c=aaa=4,b=aaa+1;
	printf("a=%d,b=%d,c=%d\n",aaa,b,c);
	

	int k=3,sss=0;
	switch(k){
		case 3: sss++;k++;
		case 4: sss+= 1;
		switch(sss){
			case 1: sss+=2;
			default: k++; break;
		}
		default: sss+=3 ;break;
	}
	printf("%d#%d#\n",k,sss);


	int block[]={4,-3,5,-2,-1,2,6,-2};
	printf("%d\n",f(block,sizeof(block)/sizeof(int)));

		
	
	return 0;
}
