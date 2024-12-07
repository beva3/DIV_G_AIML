#include <stdio.h>
void func(int a[]){
    // printf("sizeof(array) = %zu\n", sizeof(a));
    /**
     * not working :
     * sizeof.c:3:43: warning: ‘sizeof’ on array function parameter ‘a’ will return size of ‘int *’ [-Wsizeof-array-argument]
    3 |     printf("sizeof(array) = %zu\n", sizeof(a));
      |                                           ^
sizeof.c:2:15: note: declared here
    2 | void func(int a[]){
      |           ~~~~^~~
     */
}

int main(){
    int *a,b;
    int c[] = {1,2,3,4};
    func(c);
    printf("sizeof(int)  = %zu\n",sizeof(b));
    printf("sizeof(int*) = %zu\n",sizeof(a));
    return 0;
}