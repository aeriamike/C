#include<stdio.h>

union ChI{
	int i;
	unsigned char ch[4];
};

int main(void){
	union ChI chi;
	chi.i = 0xDEADBEEF;
	for(int i=0; i<4;i++){
		
		printf("%02X",chi.ch[i]);
	}
}
