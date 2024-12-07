#include <stdio.h>
// #include <stdlib.h>

//! [1] Access the adress of different types of variables using the pointor
void exo_1(){

    printf("Access the adress of different types of variables using the pointor\n");

    int intVar = 10, *ptrIntVar = NULL;
    float floatVar = 1.0, *ptrFloatVar = NULL;
    char charVar = 'a', *ptrCharVar = NULL;
    double doubleVar = 3.14159, *ptrDoubleVar = NULL;

    // Assigning adress for eache type of variable
    ptrIntVar = &intVar;
    ptrCharVar = &charVar;
    ptrFloatVar = &floatVar;
    ptrDoubleVar = &doubleVar;

    printf("%3d | %p\n%3d | %p\n\n", intVar, &intVar, *ptrIntVar, ptrIntVar);
    printf("%f | %p\n%f | %p\n\n", floatVar, &floatVar,*ptrFloatVar, ptrFloatVar);
    printf("%lf | %p\n%lf | %p\n\n",doubleVar, &doubleVar, *ptrDoubleVar, ptrDoubleVar);
    printf("%c | %p\n%c | %p\n\n",charVar, &charVar, *ptrCharVar,ptrCharVar);

}

// ! [2] swap two number using poiters
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void exo_2(){
    int a = 2,
        b = 3;
        printf("swap two number using poiters\n\n");
    printf("befor swapping ; a = %d, b = %d\n",a,b);
    printf("swapping ....\n");
    swap(&a,&b);
    printf("After swapping ; a = %d, b = %d\n",a,b);
}

// ! [3] Compute area and perimeter of a rectangle using pointers as parameters to a function
void computer_rectangle(float *length, float *width, float *p, float *area){
    *p = (*width + *length) *2;
    *area = (*width * *length);
}
void exo_3(){
    printf("Compute area and perimeter of a rectangle using pointers as parameters to a function\n\n");
    float   l = 2.,
            w = 3.,
            p = 0.,
            a = 0.;
    computer_rectangle(&l, &w, &p, &a);
    printf("length  = %f\n",l);
    printf("width   = %f\n",w);
    printf("p       = %f\n",p);
    printf("a       = %f\n",a);
    
}

// ! [4] Store values of an array and display it using pointers
void exo_4(){
    printf("Store values of an array and display it using pointers\n\n");
    int arr[] = {3,4,5,6,7,8};
    int *p_arr = NULL;
    int sizeof_arr = sizeof(arr);
    int sizeof_p = sizeof(p_arr);
    int sizeof_int = sizeof(int);
    printf("sizeof(arr)     = %d\n",sizeof_arr);
    printf("sizeof(p_arr)   = %d\n",sizeof_p);
    printf("sizeof(int) = %d\n",sizeof_int);
    int length = sizeof(arr)/sizeof(arr[0]);
    p_arr = arr;
    printf("sizeof(arr)     = %zu\n",sizeof(arr));
    printf("sizeof(p_arr)   = %zu\n",sizeof(p_arr));
    for (int i = 0; i < length; i++) {
        printf("%3d\n",p_arr[i]);
    }
}
int main(){
    printf("FOP 24 dec 2024\n");
    exo_4();
    return 0;
}
