
#include <stdlib.h>
#include <stdio.h>

int **sum_2D(int l, int c,int arr_1[l][c], int arr_2[l][c]){
    int **sum = (int **)malloc(l * sizeof(int *));
    for (size_t i = 0; i < l; i++) 
        sum[i] =(int *)malloc(c * sizeof(int));

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            sum[i][j] += arr_1[i][j] + arr_2[i][j];
        }
    }
    return sum;
}
void printArray(int ***arr,int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%04d%c ", (*arr)[i][j],j==c-1?'\n':' ');
        }
        printf("\n");
    }
    for(int i = 0; i < l; i++) 
        free((*arr)[i]);
    free(*arr);
}
void print_arr(int l, int c,int (*arr_1)[l][c]){
    printf("--------------------------------\n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%4d%c", (*arr_1)[i][j],j==c-1?'\n':' ');
        }
    }
    printf("--------------------------------\n\n\n");
}
void get_matrix(int l, int c,int (*arr_1)[l][c]){
    printf("get matrix\n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("Enter element arr_1[%d][%d]: ", i, j);
            scanf("%d", &(*arr_1)[i][j]);
            // (*arr_1)[i][j] =0;
        }
    }
}
void get_lc(int *l,int *c){
    printf("Enter the row of array      : "),scanf("%d", l);
    printf("Enter the column of array   : "),scanf("%d", c);
}
int main(){
    printf("Sum of 2 2d vectors\n");
    int l = 0,c = 0;
    get_lc(&l, &c);

    int arr_1[l][c];
    int arr_2[l][c];

    get_matrix(l, c, &arr_1);
    get_matrix(l, c, &arr_2);
    print_arr(l, c, &arr_1);
    print_arr(l, c, &arr_2);
    int **sum_arr = sum_2D(l, c, arr_1, arr_2);
    printArray(&sum_arr, l, c);
    
    return 0;
}
