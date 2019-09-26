#include <stdio.h>;
#include <stdlib.h>;

int* array_at(Array *a, int index){
	
	if(index >=a->size){
		array_inflate(a, (index-a->size+1)*BLOCK_SIZE-a->size);
	}
	return &(a->array[index]);
}

int array_get(const Array *a, int index){
	return a ->array[index];
}

void array_set(Array *a, int index, int value){
	a->array[index]=value;
}

void array_inlate(Array *a, int more_size){
	int *(int*)malloc(sizeof(int(a->size+more_size));
	int i;
	for(i=0; i<a->size; i++){
		p[i] a->array[i];
	}
	free(a->array);
	a->array = p;
	a->size  += more_size;
}

int main(){
	
	Array a = array_create(100);
	printf("%d\n", array_size(&a));
	*array_at(&a,0)=10;
	printf("%d\n", *array_at(&a,0));
	
	int number;
	int cnt = 0;
	while(1){
		scanf("%d",&number);
		*array_at(&a,cnt++)=number;
		scanf("%d",array_at(&a,cnt++));
	}
	
	array_free(&a);
	return 0;
}
