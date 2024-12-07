#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sorting(int *array, int length){
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if(array[j]>array[j+1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }
}
void print_array(int *array, int length){
    for(int i = 0; i < length; i++){
        printf("%d\n", array[i]);
    }
}
int main(){
    printf("sorting strings...\n");
    int array[5] = {5, 3, 2, 4, 1};
    int length = sizeof(array)/sizeof(array[0]);

    sorting(array, length);
    print_array(array, length);
    return 0;
}