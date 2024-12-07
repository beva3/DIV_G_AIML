#include <stdio.h>

int fact(int n){
    if(n>=0){
        return (n<=0) ? 1 : n*fact(n-1);
    }
    else return -1;
}

int main(){
    printf("Factorial of number\n");
    int n = 3;
    printf("Fact %d is %d\n",n, fact(n));
    return 0;
}