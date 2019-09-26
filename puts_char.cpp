#include<stdio.h>
#include <stdlib.h>

int main ()
{

/*
    char c;

    c = getchar();

    while (c != EOF){
        putchar(c);
        
        c = getchar();
        

}

system("pause");
*/
/*
printf("% 5dend\n", 123456);
printf("+% +-5dend\n",-123);
printf("%d\n",123);
printf("%10.2lf\n", 12.345678898999);
*/

//char a;
//char fmt[80];
//sprintf(fmt,"%%%dd\n",a);
/*
printf("%*.*lf",5,2,123.1212);
printf("%d\n",123);

printf("\n");
unsigned char c=255;
char d=255;
printf("%hhd\n",c);
printf("%hhd\n",d);
printf("%d\n",123);

printf("\n");
int i;

scanf("%*d%d",&i);
printf("%d\n",i);
*/
/*
int i;
char ch;

int n=scanf("%hhd", &ch);
printf("%d\n",n);
*/


/*
int d;
int res=0;
int i;

char ch = getchar();
char space=' ';

while(ch!=space){
	d = ch-'0';
	res=res*10+d;
    ch = getchar();
}

printf("%d",res);
return 0;

*/


//%[flags]
printf("%9d\n",123);
printf("%-9d\n",-123);
printf("%-+9d\n",123);
printf("%09d\n",-123);

//[width]

printf("%9.4f\n",123.0123);
printf("%*d\n",6,123);
printf("%.*f\n",4,12.12312);

//[hIL]
printf("%hhd\n",(char)12345);

//%type
int num;
printf("%d%n\n",12345,&num);
printf("%d\n",num);
/*

//scanf: %[flag]
int num2;
scanf("%*d%d",&num2);
printf("%d\n",num2);

//%[flag]type
int num3;
scanf("%i",&num3);
printf("%d\n",num3);

char a,b,c;
scanf("%*[^,] , %[^,] , %[^,],",&b,&c);
printf("a=%c\n",a);
printf("b=%c\n",b);
printf("c=%c\n",c);

*/
int aa[4][4]={{1,2,3,4},{5,6,7,8},{3,9,10,2},{4,2,9,6}};
int i, s=0;
for(i=0;i<4;i++){
	s+=aa[i][1];
	printf("%d\n",s);
	
}
int m=1;
int k=-m;

printf("%d\n",(k));
}










