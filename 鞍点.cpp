#include <stdio.h>

int main()
{
    int n, flag = 0;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<n; ++i){
        int max = 0;
        for(int j=1; j<n; ++j){
            if(arr[i][j]>arr[i][max]){
                max = j;
            } 
        }
        int min = 0;
        for(int j=1; j<n; ++j){
            if(arr[j][max]<arr[min][max]){
                min = j;
            }
        }
        if(i == min){
            flag = 1;
            printf("%d %d\n", min, max);
            break;
        }
    }   
    if(!flag) printf("NO\n");
    return 0;       
}
