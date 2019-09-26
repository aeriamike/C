#include <stdio.h>
#include <string.h>


int main(){
    char gps[200];
    scanf("%s", gps);
    int sum, checksum, hour, minute, second;
    while(strcmp(gps, "END")){
        if(strstr(gps, "$GPRMC")){
            char *p = strchr(gps, ',');
            p = strchr(p+1, ',');
            if(*(p+1)=='A'){
                sum = gps[1];
                checksum = 0;
                int i;
                for(i = 2; gps[i]!='*'; ++i){
                    sum = sum^gps[i];
                }   
                sum %= 65536;
                for(i = i+1; gps[i]!='\0'; ++i){
                    if(gps[i]>='0'&&gps[i]<='9'){
                        checksum = checksum*16 + gps[i] - '0';
                    }else{
                        checksum = checksum*16 + gps[i] - 'A' + 10;
                    }
                }
                if(sum == checksum){
                    hour = (gps[HOUR]-'0')*10 + gps[HOUR+1]-'0';
                    hour = hour>16 ? hour-16 : hour+8;
                    minute = (gps[MINUTE]-'0')*10 + gps[MINUTE+1]-'0';
                    second = (gps[SECOND]-'0')*10 + gps[SECOND+1]-'0';
                }
            }
        }
        scanf(" %s", gps);
    }
    printf("%02d:%02d:%02d\n", hour, minute, second);
    return 0;
}
