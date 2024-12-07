#include <stdio.h>

int add(int a, int b){return a+b;}
int mult(int a, int b){return a*b;}
int div(int a, int b){
    if(b==0){
        printf("zero division by zero\n");
        return -1;
    }
    return a/b;
}
char menu(){
    printf("menu ...\n");
    printf("[+]. Addition\n");
    printf("[-]. Subtraction\n");
    printf("[*]. Multiplication\n");
    printf("[/]. Division\n");
    char choice;
    printf("Enter your choice : ");
    scanf("%c",&choice);

    return choice;
}
int calc(char op,int a,int b){
    switch(op){
        case '+': return add(a,b);break;
        case '-': return add(a,-b);break;
        case '*': return mult(a,b);break;
        case '/': return div(a,b);break;
        default: printf("Invalid operator\n"); return -1;
    }
}
int main(){
    printf("Calculating\n");
    char op = menu();
    int res = calc(op, 2, 3);
    printf("res = %d\n",res);
    return 0;
}