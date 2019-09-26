#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	
	int address;
	int data;
	int next;
	
	int address_line[data];
	int data_line[data];
	int next_line[data];
	
	scanf ("%d %d %d", &address, &data, &next);
	printf("%05d %d %d\n", address, data, next);

	printf("\n");
		
	for(int i=0; i<data; i++){
		
		scanf("%d %d %d", &address_line[i], &data_line[i], &next_line[i]);
		//printf("%05d %d %05d", address_line[i], data_line[i], next_line[i]);
	}
	
	printf("\n");
	
	for(int a=0;a<data;a++){
		printf("%d %d %d\n", address_line[a], data_line[a], next_line[a]);
	}
	return 0;



}
