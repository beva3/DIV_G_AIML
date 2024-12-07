#include <stdio.h>

int sumArray(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}


int main(){
    printf("Summ 1d array\n");
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of the array elements is: %d\n", sumArray(arr, n));
    return 0;
}