#include <stdio.h>
#include <string.h>

// ![9] Creat and display a student structure 

typedef struct Student{
        char name[80];
        char roll_no[10];
}Student;
void display_student(Student s){
    printf("Display student ... \n");
    printf("Name    :    %s\n",s.name);
    printf("rool_no :    %s\n",s.roll_no);
}
void init_student(Student *s){
    printf("Initializing Student ...\n");
    strcpy(s->name, "Raphael");
    strcpy(s->roll_no,"12345");

}
void set_student(Student *s,const char *name,const char *roll_no){
    printf("Setting Student ... \n");
    strcpy(s->name, name);
    strcpy(s->roll_no, roll_no);
}
void exo_9(){
    printf("exo_9\n");
    Student s;
    init_student(&s);
    display_student(s);

    set_student(&s, "Raphael kely", "23456");
    display_student(s);
}

// ! [10]  store and display the value of the array using pointers
void init_array(int *arr,const int lenght) {
    printf("init_array\n");
    for (int i = 0; i<lenght; i++)
        arr[i] = 0;
}
void display_array(int *arr,const int lenght) {
    printf("Display array :\n");
    for(int i = 0; i<lenght; i++)
        printf("a_[%02d] = %3d\n",i,arr[i]);
    printf("\n");
}

int *get_array(int *arr,const int lenght) {

    for (int i = 0; i<lenght; i++){
        printf("Enter array[%02d] : ",i);
        scanf("%d",arr + i);
    }
    return arr;
}

void exo_10(){
    printf("Exo_10\n");
    const int lenght = 10;
    int array[lenght];
    int *p_array = array;
    init_array(p_array, lenght);
    get_array(p_array, lenght);
    display_array(p_array, lenght);
    display_array(array, lenght);
}
// ![11] display marks of 3 subject for 3 students
typedef struct SUBJECT{
    char label[20];
    float mark;
}SUBJECT;
void init_subject(SUBJECT *subject,char *label,float mark){
    strcpy(subject->label, label);
    subject->mark = mark;
}
void display_subject(SUBJECT subject){
    printf("%s -> %g\n",subject.label,subject.mark);
}
void set_subject(SUBJECT *s,char *label,float mark){
    strcpy(s->label, label);
    s->mark = mark;
}

typedef struct STUDENT{
    char name[50];
    SUBJECT subjects[3];
}STUDENT;

void init_STUDENT(STUDENT *s){
    printf("init students\n");
    strcpy(s->name, "Jean_default");
    init_subject(&s->subjects[0],"Math",0.);
    init_subject(&s->subjects[1],"Programming",0.);
    init_subject(&s->subjects[2],"Anglais",0.);    
}
void display_STUDENT(STUDENT student){
    printf("Name: %s\n",student.name);
    for (size_t i = 0; i < 3; i++)
        display_subject(student.subjects[i]);
}
void set_student_name(STUDENT *s,char *new_name){ 
    strcpy(s->name, new_name);
}

void exo_11(){
    printf("Exo_11\n");
    // STUDENT s[3];
    // init_STUDENT(&s[0]);
    // set_student_name(&s[0], "Raphael");
    // set_subject(&s[0].subjects[0], "Malagasy", 10.);
    // set_subject(&s[0].subjects[1], "Francais", 10.);
    // set_subject(&s[0].subjects[2], "Anglais", 20.);
    // display_STUDENT(s[0]);
}
int main(){
    printf("Practice of 6 dec 2024\n\n");
    // exo_9();
    // exo_10();
    exo_11();
    return 0;
}