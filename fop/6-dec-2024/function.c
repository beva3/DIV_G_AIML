#include <stdio.h>
#define __CRT__SECURE_NO_WARNINGS

void print_Array(int arr[], int size){
    for (int i = 0; i<size; i++) {
        printf("array[%2d] : %2d\n", i,arr[i]);
    }
}

void printString(char *str){
    while (*str)
    {
        printf("%c",*str);
        str++;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    print_Array(arr, size);

    printString("Raohael\n");


    char name[40];
    printf("Enter name : ");
    gets(name);
    printf("you name is : %s\n", name);

    return  0;
}