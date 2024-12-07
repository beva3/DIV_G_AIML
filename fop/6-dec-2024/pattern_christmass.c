#include <stdio.h>
void draw(const char ch,int col){
    for (int i=0; i<col; i++) {
        printf("%c%c", ch,(i==col-1)?'\n':' ');
    }
}
void blanc(int col){
    for (int i=0; i<col; i++) {
        printf("%c", ' ');
    }
}

void tree(int lenght){
    int c=1;
    for (int i=0; i<lenght; i++) {
        blanc(lenght-i);
        draw('*',c);
        c++;
    }
    for(int i=0 ; i<3; i++){
        blanc(lenght);
        draw('*',1);
    }
}
int main(){
    printf("christmas tree\n");
    tree(9);
    return 0;
}