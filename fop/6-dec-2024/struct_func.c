#include <stdio.h>
#include <string.h>

typedef struct  Car{
    char name[30];
    int price;
}Car;
void print_car_info(Car *car){
    printf("info Car\n");
    printf("name    : %s\n", car->name);
    printf("price   : %d\n",car->price);
}

typedef struct Student{
    char name[30];
    char roll_no[10];
    float mark ;
    int age;
}Student;

void init_Student(Student *s){
    strcpy(s->name, "Default_R");
    strcpy(s->roll_no, "123456");
    s->mark = 0;
    s->age = 21;
}
void print_Student(Student s){
    printf("name    :   %s\n", s.name);
    printf("roll_no :   %s\n", s.roll_no);
    printf("mark    :   %g\n", s.mark);
    printf("age     :   %d\n",s.age);
}

int main(){
    printf("struct and functin\n");
    Car c = {"TOYOTA",100};
    print_car_info(&c);

    printf("------------------------------------------------------------\n");

    Student s;
    printf("sizeof(Student) = %zu\n",sizeof(s));
    init_Student(&s);
    print_Student(s);
    
    return 0;
}