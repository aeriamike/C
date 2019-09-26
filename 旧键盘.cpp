#include<stdio.h>
#include<string.h> 
int main()
{ 

	
    char strtrue[100000];
    char badkey[200];
    
     int times =0;
     int aa =0;

    
    
   
	gets(strtrue);
    gets(badkey); 

	int istr=0;
	int canout=1;
	int num=0;
	int len=strlen(badkey);
int flag=1;
	

	 while(strtrue[istr])
    {
        canout=1;
        
        for(int i=0;i<len;i++)
        {
            if(strtrue[istr]==badkey[i])
                canout=0;
              
        }
        
        if(canout==1) 
        {	
        
    for(int kp = istr-1; kp>=0; kp--){
    //	printf("%c\n",strtrue[kp]);
    //	printf("%c\n",strtrue[istr]);
	//	printf("\n");
	
    	if(strtrue[kp]==strtrue[istr] || strtrue[kp]==strtrue[istr]-32 || strtrue[kp]==strtrue[istr]+32){
	//	printf("%c\n",strtrue[kp]);
    //	printf("%c\n",strtrue[istr]);
	//	printf("\n");
	//	printf("\n");
		flag=0;
		break;
	}
        
}
// printf("%d\n",flag);
 if(flag==1){
 	if('a'<=strtrue[istr] && strtrue[istr]<='z'){
			
						printf("%c",strtrue[istr]-32);
						
						}
					else{
						printf("%c",strtrue[istr]);
					
						}
					
 }
							
	  num++;
        }
        
        
        istr++;
    }
    
    
    if(!num) printf("\n");
    return 0;
}

