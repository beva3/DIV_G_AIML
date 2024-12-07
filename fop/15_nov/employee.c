#include <stdio.h>

typedef struct Employee {
    int id;
    char name[50];
    double salary;
}Employee;

void display(Employee e){
    printf("ID      : %d\n", e.id);
    printf("Name    : %s\n", e.name);
    printf("Salary  : %.2lf\n", e.salary);
    printf("---------------------------------\n");
}
void displayAll(Employee e[],int size){
    for(int i = 0; i < size; i++)
        display(e[i]);
}
void inputEmployee(Employee (*e)[],int size){
    for(int i = 0; i < size; i++){
        printf("Enter Employee %d Details:\n", i+1);
        printf("ID: "),     scanf("%d", &((*e)[i].id));
        printf("Name: "),   scanf("%s", (*e)[i].name);
        printf("Salary: "), scanf("%lf", &((*e)[i].salary));
    }
}
int main(){
    printf("Employee Details Using Array of Structures\n");
    int sizeEmp = 3;
    Employee emp[sizeEmp];
    inputEmployee(&emp, sizeEmp);
    // int size = sizeof(emp)/sizeof(emp[0]);
    displayAll(emp, sizeEmp);

    return 0;
}