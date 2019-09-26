#include <stdio.h>
#include <stdlib.h>  
#include <assert.h>

// This is SortIntegerArray written from the textbook

/*
static int FindSmallestInteger (int array[], int low, int high); 
static void SwapIntegerElements (int array[], int p1, int p2); 
void SortIntegerArray (int array[], int n);


static int FindSmallestInteger (int array[], int low, int high) { 
	int i, spos;  
	spos = low; 
	for (i = low; i <= high; i++) { 
		if (array[i] < array[spos]) 
		spos = i;
		 } 
	return (spos); 
}  

static void SwapIntegerElements (int array[], int p1, int p2) { 

	int tmp;  
	tmp = array[p1]; 
	array[p1] = array[p2]; 
	array[p2] = tmp; 
  
  
} 

void SortIntegerArray (int array[], int n){
	int lh, rh; 
	for (lh = 0; lh < n; lh++){
	rh = FindSmallestInteger (array, lh, n-1); 
	SwapIntegerElements (array, lh, rh); 	
} 
}


int main(void)
{
   int Scores[13] = {1,6,78,23,19,24,27,8,2,12,33,22};
   int nScores = sizeof(Scores) / sizeof(Scores[0]);
   SortIntegerArray (Scores, nScores);
   
   int aa;
   for(aa=0;aa<nScores;aa++){
   	printf("Scores[%d] = %d\n",aa,Scores[aa]);
   }
   
   return 0;
}
*/

// The follow codes are the implemented version. 
//It changes the common sort function into bubble sort function.
void bubbleSort(int array[], int n) {
      int bool = 1;
      int j = 0;
      int temp;
      while (bool == 1) {
            bool = 0;
            j++;
            int i;
            for (i = 0; i < n - j; i++) {
                  if (array[i] > array[i + 1]) {
                        temp = array[i];
                        array[i] = array[i + 1];
                        array[i + 1] = temp;
                        bool = 1;
                  }
            }
            
            int bb;
            for(bb=0; bb<n; bb++){
            	printf("Scores[%d] = %d\n",bb,array[bb]);
			}
			printf("\n");
      }
}

int main(void)
{
   int Scores[13] = {1,6,78,23,19,24,27,8,2,12,33,22}; 
   
   int nScores = sizeof(Scores) / sizeof(Scores[0]);
   
   int cc;
   for(cc=0;cc<nScores;cc++){
   	printf("Scores[%d] = %d\n",cc,Scores[cc]);
   }
   //array before bubble sort
   printf("\n");
   
   bubbleSort (Scores, nScores);
   
   int aa;
   for(aa=0;aa<nScores;aa++){
   	printf("Scores[%d] = %d\n",aa,Scores[aa]);
   }
   //array after bubble sort
   return 0;
}







