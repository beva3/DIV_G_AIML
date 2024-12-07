#include <stdio.h>
// #include <stdlib.h>

typedef struct Student{
    char name[100];
    int age;
} Student;
void add_new(char *file_name, Student *student);

int main(){
    printf("Record students\n");
    Student s1 = {"Raphael",21};
    char row[256];
    FILE *StudentFile = fopen("Student.txt","a+");

    printf("Enter the name of the student : "),scanf("%s",s1.name);
    printf("Enter the age of the student  : "),scanf("%d",&s1.age);

    // write the students
    fprintf(StudentFile, "may name: is %s, i'm %d years old\n", s1.name, s1.age);
    fclose(StudentFile);

    // print the students records
    StudentFile = fopen("Student.txt","r");
    while (fgets(row, sizeof(row), StudentFile)) {
        printf("%s",row);
    }   

    return 0;
}