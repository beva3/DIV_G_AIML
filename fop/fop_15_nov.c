#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void printMatrix(int **matrix, int rows, int cols);
void initMatrix(int ***matrix, int rows, int cols);
void get_values(int ***matrix, int rows, int cols);
void get_value(int ***matrix, int row, int col);

int main(){
    int **matrix;
    int rows = 3,
        cols = 3;
    initMatrix(&matrix, rows, cols);
    get_values(&matrix,rows,cols);
    printMatrix(matrix,rows,cols);
    return 0;
}

void printMatrix(int **matrix, int rows, int cols){
    printf("Print matrix\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%3d%c", matrix[i][j], j==cols-1 ? '\n':' ');
        }
    }
}

void initMatrix(int ***matrix, int rows, int cols){
    printf("init matrix\n");
    *matrix = (int **) malloc(rows*sizeof(int *));
    for(int i=0; i<rows; i++){
        (*matrix)[i] = (int *) malloc(cols*sizeof(int));
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            (*matrix)[i][j] = 0;
        }
    }
}

void get_values(int ***matrix, int rows, int cols){
    printf("Enter values\n");
    (*matrix)[2][1] = 5;
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            get_value((matrix), i, j);
        }
    }
}

void get_value(int ***matrix, int row, int col){
    
    printf("Get on value in %d %d\n",row,col);
    printf("Enter value for [%d][%d]: ", row, col);

    if(scanf("%d", &(*matrix)[row][col]) != 1){
        printf("Invalid input. Please enter a valid number.\n");
        return;
    }
    
}