#include <math.h>
#include <stdio.h>
#include <string.h>
// ![11] display marks of 3 subject for 3 students
const char *sub_label[3]={
    "Math",
    "Programming",
    "Anglais"
};
typedef struct Subject{
    char label[50];
    float mark;
}Subject;
void init_subject(Subject *subject,const char *label){
    printf("Initializing Subject...\n");
    strcpy(subject->label,label);
    subject->mark = 0;
}
void set_mark(Subject *subject,float mark){
    printf("Setting Mark...\n");
    subject->mark = mark;
}
void display_subject(Subject subject){
    printf("%s -> %.2f\n", subject.label, subject.mark);
}



typedef struct Student{
    char name[50];
    Subject subjects[3];
}Student;


void init_student(Student *s,const char *name){
    static int i = 1;
    printf("Initializing Student...\n");
    strcpy(s->name,name);
    for(int i=0;i<3;i++)
        init_subject(&s->subjects[i], sub_label[i]);
}

void student_mark(Student *s,float *mark){
    printf("Setting Mark for Student...\n");
    for (size_t i = 0; i < 3; i++)
    {
        s->subjects[i].mark = mark[i];
    }
}
void display_student(Student s){
    printf("\n\nDisplaying Student...\n");
    printf("Name: %s\n",s.name);
    for(int i=0;i<3;i++)
        display_subject(s.subjects[i]);
    printf("\n");
}


void exo_10(){
    printf("Exo 10\n");
    Student s[3];
    const char *name[] = {
        "Raphael",
        "John",
        "David"
    };
    // init_student(&s,"Raphael");
    for (int i = 0; i<3; i++) 
        init_student(&s[i],name[i]);
    
    student_mark(&s[0], (float[]){12.,2.,13});
    student_mark(&s[1], (float[]){15.,16.,19});
    student_mark(&s[2], (float[]){18.,12.,14});
    
     for (int i = 0; i<3; i++)
        display_student(s[i]);
    
}
int main(){
    exo_10();
    return 0;
}