#include <stdio.h>
#include <stdlib.h>  
#include <assert.h>
/*
static int intcmp(const void *pa, const void *pb)
{
    int a = *(int *)pa;
    int b = *(int *)pb;
    if (a > b)
        return +1;
    else if (a < b)
        return -1;
    else
        return 0;
}
*/
static int removeDuplicates(int *array, int size)
{
    int i;
    int last = 0;
    assert(size >= 0);
    if (size <= 0)
        return size;
    for (i = 1; i < size; i++)
    {
        if (array[i] != array[last])
            array[++last] = array[i];
    }
    return(last + 1);
}

static void type_text(int *array, int size)
//static void type_text(int *array, int size, const char *tag, const char *name)
{
   int i;
   //printf("%s\n", tag);
   for (i = 0; i < size; i++)
       printf("a[%d] = %d\n", i, array[i]);
}

int main(void)
{
   int Scores[13] = {65,72,75,79,82,82,84,84,84,86,90,94,95};
   
   int nScores = sizeof(Scores) / sizeof(Scores[0]);
   
   printf("Before:\n");
   
   type_text(Scores, nScores); //before changing the array
   
   printf("Total number of numbers in the array: %d\n",nScores);
   
   
   printf("\n");
   
   
   printf("After:\n");
   
   nScores = removeDuplicates(Scores, nScores);//changing the array
   
   type_text(Scores, nScores);// after changing the array
   
   printf("Total number of numbers in the array: %d\n",nScores);
   
   return 0;
}
