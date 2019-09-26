#include<stdio.h>
#include<string.h> 
int main()
{ 
    char badkey[200];
    char strtrue[100010];
    gets(badkey);
	gets(strtrue);
    
    int istr=0,canout=1,num=0,len=strlen(badkey);
    
    while(strtrue[istr])
    {
        canout=1;
        for(int i=0;i<len;i++)
        {
            if(strtrue[istr]==badkey[i])
                canout=0;
            else if('A'<=strtrue[istr] && strtrue[istr]<='Z' && badkey[i]=='+')            
                canout=0;
            else if('a'<=strtrue[istr] && strtrue[istr]<='z' && strtrue[istr]-'a'+'A'== badkey[i]) //strtrue[istr]-32           
                canout=0;            
        }
        
        if(canout==1) 
        {
            printf("%c",strtrue[istr]);
            num++;
        }
        istr++;
    }
    if(!num) printf("\n");
    return 0;
}

