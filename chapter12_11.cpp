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

// The follow codes are the implemented version. It changes the common sort function into bubble sort function.
void bubbleSort(int arr[], int n) {
      bool swapped = true;
      int j = 0;
      int tmp;
      while (swapped) {
            swapped = false;
            j++;
            for (int i = 0; i < n - j; i++) {
                  if (arr[i] > arr[i + 1]) {
                        tmp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = tmp;
                        swapped = true;
                  }
            }
      }
}

int main(void)
{
   int Scores[13] = {1,6,78,23,19,24,27,8,2,12,33,22};
   int nScores = sizeof(Scores) / sizeof(Scores[0]);
   bubbleSort (Scores, nScores);
   
   int aa;
   for(aa=0;aa<nScores;aa++){
   	printf("Scores[%d] = %d\n",aa,Scores[aa]);
   }
   
   return 0;
}







