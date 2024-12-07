#include <stdio.h>
#include <stdbool.h>

bool is_prim(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    printf("Hello, Stab!\n");
    for(int i=0; i<= 100; i++){
        printf("%d | %d\n", i,is_prim(i));
    }
    // printf("%d\n",is_prim(2));
    return 0;
}