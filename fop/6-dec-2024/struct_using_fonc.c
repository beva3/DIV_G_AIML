#include <stdio.h>


typedef struct Student{
    char name[100];
    int age;
    float grade;
} Student;

Student init_student(){
    printf("Initializing student...\n");
    Student student = {"Raphael", 21, 85.5};
    return student;
}
void display_details_student(Student *student){
    printf("Display student details...\n");
    printf("Name    : %s\n", student->name);
    printf("Age     : %d\n", student->age);
    printf("Grade   : %.2f\n", student->grade);
    printf("---------------------------------\n");
}
int main(){
    printf("display details student\n");
    Student student = init_student();
    display_details_student(&student);
    return 0;
}