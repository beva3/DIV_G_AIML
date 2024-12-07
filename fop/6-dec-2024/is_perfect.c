#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int num){
    int sum = 0;
    if(num<=0) return false;
    for(int i=1; i<num; i++){
        if(num%i==0){
            sum += i;
        }
    }
    return sum==num;
}
int main(){
    printf("is perfectly\n\n");
    printf("is perfect %d\n\n",isPerfect(6));
    return 0;
}