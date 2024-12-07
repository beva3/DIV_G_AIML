#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

/* ===================================================================== */
//   add two floating points number
float addTwoFloats(float *a, float *b){
    // imput the two floating point numbers
    return *a + *b;
}
void get_number(float *a){
    printf("Enter a floating point number: ");
    if(scanf("%f", a) != 1){
        printf("Invalid input. Please enter a floating point number.\n");
        return; // terminate the program if invalid input is given.  // if input is not a floating point number, exit the program.  // exit(1) is the standard way to terminate a program with an error code.  // 0 is the standard way to terminate a program successfully.
    }
}
void get_numbers(float *a, float *b){
    get_number(a);
    get_number(b);
}
/* ===================================================================== */
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
/* ===================================================================== */
float area_circle(float *radius){
    const float pi = 22./7.;
    return pi*(*radius)*(*radius);
}
/* ===================================================================== */
float simple_interest(float main_amount,float rate,float time){
    return (main_amount * rate * time)/100.;
}

/* ===================================================================== */
float sum_marks(float *marks,int count){
    float sum = 0;
    for(int i = 0; i < count; i++){
        sum += marks[i];
    }
    return sum;
}
float penrcentage_marks(float *marks,int count){
    float sum = sum_marks(marks, count);
    return (sum / (count));
}
void get_marks(float *marks,int count){
    printf("Enter marks for %d subjects:\n", count);
    for(int i = 0; i < count; i++){
        printf("Enter marks for subject %d: ", i+1);
        if(scanf("%f", &marks[i]) != 1){
            printf("Invalid input. Please enter a valid number.\n");
            return; // terminate the program if invalid input is given.
        }
    }
}
/* ===================================================================== */
// gross salary
float gross_salary(float basic_salary, float house_rent_allowance, float dearness_allowance){
    return basic_salary + house_rent_allowance + dearness_allowance;
}
float hra(float basic_salary, float rate){return basic_salary * rate;}
float da(float basic_salary, float rate){return basic_salary * rate;}
void get_basic(float *basic_salary){
    printf("Enter basic salary: ");
    if(scanf("%f", basic_salary) != 1){
        printf("Invalid input. Please enter a valid number.\n");
        return; // terminate the program if invalid input is given.
    }
}
/* ===================================================================== */
bool is_odd(int number){
    return (number%2 != 0) ? true : false;
}
void print_is_odd(int n){
    (is_odd(n)) ? printf("%d is odd number\n", n) : printf("%d is even number\n",n);
}
/* ===================================================================== */
// solve the second deg
float discriminant(float a,float b,float c){
    // formula : delta = b*b - 4*a*c;
    return b*b - 4*a*c;
}
float *solve_e(float a, float b, float c){
    float *slt = (float*)malloc(2*sizeof(float));
    float d = discriminant(a,b,c);
    printf("delta = %f\n",d);
    if(d>=0){
        printf("(e) have the folowing root ...\n");
        slt[0] = (-b + sqrt(d))/(2*a);
        slt[1] = (-b - sqrt(d))/(2*a);
    }
    else{
        printf("(e) do not have real root ...\n");
        slt[0] = slt[1] = NAN;
    }
    return slt;
}
void get_coefficients(float *a, float *b, float *c){
    printf("Enter coefficients a, b, c : ");
    if(scanf("%f %f %f", a, b, c) != 3){
        printf("Invalid input. Please enter three valid numbers.\n");
        return; // terminate the program if invalid input is given.
    }
}
void print_sE(float *s){
    printf("The solutions for the equation are: %g and %g\n", s[0], s[1]);
}
/* ===================================================================== */
bool is_alphabet(char ch){
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))? true : false;
}
/* ===================================================================== */
int sum_n(int n){return (0.5)*(n*(n+1));}
/* ===================================================================== */
int fact_of(int n){
    if(n<0){
        printf("invalid number, enter a positive number\n");
        return -1;
    }
    return (n==0)? 1:n*fact_of(n-1);
}

/* ===================================================================== */
void draw(int  colums){
    for(int i=0; i<colums; i++)
        printf("*%c",(i == colums-1)? '\n' :' ');
}
void paterrns(int rows){
    for(int i=0; i<=rows; i++)
        draw(i);
}

/* ===================================================================== */
int fib(int n){
    if(n==0) return 0;
    else if(n ==1) return 1;
    else if(n>1) return fib(n-1) + fib(n-2);
    else{
        printf("Error n should be positive\n");
        return -1;
    }
}
/* ===================================================================== */
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
/* ===================================================================== */
void print_day_of_week(int number_day){
    char day[7][20]={
        "Monday", 
        "Tuesday", 
        "Wednesday", 
        "Thursday",
        "Friday", 
        "Saturday",
        "Sunday"
    };
    
    printf("%s\n", day[number_day]);
}
/* ===================================================================== */
int main(){
    // float basic =0;
    // get_basic(&basic);
    // float   _hra = hra(basic,0.3 ),
    //         _da  = da(basic, 0.15);
    // printf("gross salary = %g\n",gross_salary(basic, _hra, _da));
    // paterrns(9);
    // for (int i=0; i<6; i++)
    //     printf("%d\n",fib(i));
    int a = 4, b = 8;
    printf("gcd = %d, lcm = %d\n",gcd(a, b), lcm(a, b));
    print_day_of_week(0);
    return 0;
}