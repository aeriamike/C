#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _array{
	int *data;
	int length;
	struct _array* next;
}Array;

//const int BLK_SIZE = 100;
const int BLK_SIZE = 1;

Array* array_create(int length){
	
	Array array;
	//array.length = length;
	//array.data = (int*)malloc(sizeof(int)*length);
//	array.length = BLK_SIZE;
//	array.data = (int*)malloc(sizeof(int)*BLK_SIZE);
Array *p = (Array*)malloc(sizeof(array));
p->data = (int*)malloc(sizeof(int)*BLK_SIZE);
p->length = BLK_SIZE;
p->next = NULL;
return p;
//	array.next = NULL;
//	return array;
}

void array_destroy(Array* pa){
	
	free(pa->data);
	pa->data = 0;
	pa->length = 0;
	
}

array_access(Array* pa, int index){
	
	
	//if(index >= array_length(pa)){
		
	//	array_inflate(pa,(index/BLK_SIZE+1)*BLK_SIZE-array_length(pa));
	//}
	
	
	
	while( index>= BLK_SIZE){
		index = index - BLK_SIZE;
		pa = pa->next;
	}

	if(index >= BLK_SIZE){
		return array_access(pa->next, index - BLK_SIZE);	
	}

	return (pa->data[index]);
}

void array_set(Array* pa, int index, int value){
	pa->data[index]=value;
	
}

int array_get(Array* pa, int index){
	return pa->data[index];
}

void array_length(Array *pa){
	int length = 0;
	
	do{
		length += pa->length;
		pa = pa->next;
	}while(pa);
	
	if(pa->next){
		return pa->length + array_length(pa->next);
		return pa->length;
	}
	//return pa->length;
	return length;

}

void array_inflate(Array* pa, int increment){
	
/*	int newlength = pa->length + increment;
	int *newdata = (int*)malloc(sizeof(int)*newlength);
	for(int i=0; i<pa->length; i++){
		newdata[i] = pa0>data[i];
	}
	array_destroy(pa);
	pa->data = newdata;
	pa->length = newlength;	
	*/
	
//	Array *pa=(Array*)malloc(sizeof(Array));
	
//	pa->next = (int*)malloc(sizeof(int)*BLK_SIZE);
//	pa->length = BLK_SIZE;
//	pa->next = NULL;
	Array *p = array_create();
	while(pa->next){
		pa = pa->next;
	}	
	pa->next = p;
}

int main(){
	Array* p = array_create();
	*array_access(p,0)=6;
	int k = *array_access(p,0);
	array_destroy(&a);
	free(p);
	return 0;
}
