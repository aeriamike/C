#include<stdio.h>

int main(){
    int poly[101] = {0};
    int i, temp;
    int max = 0;
     int flag = 0;  
      
     while(flag != 2) {
         scanf("%d %d", &i, &temp);
         poly[i] += temp; 
          
         if (i > max)
             max = i;
                  
         if (i == 0) 
             flag++;    
     }
      
     int coe_is_int = true;
     int coe_is_zero = true;
     for (i = max; i >= 0; i--) {
         if (poly[i] != 0) {
             coe_is_zero = false;   
              
             if (poly[i] < 0)
                 coe_is_int = true; 
                  
             if (coe_is_int == true)  
                 coe_is_int = false;  
             else 
                 printf("+" ); 
                  
             if (i != 0 && poly[i] != 1) 
                 printf("%d", poly[i]);
                    
             if (i == 0)  
                 printf("%d\n",poly[i]);
             else if (i == 1) 
                 printf("x");
             else
                 printf("x%d", i);    
         }
         else {    
             if (i == 0) {
                 if (coe_is_zero == false)
                     printf("+"); 
                      
                 printf("%d\n", poly[i]);  
             }
                  
         }
     }    
     return 0;
}
