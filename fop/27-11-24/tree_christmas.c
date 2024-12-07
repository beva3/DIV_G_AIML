
#include <stdio.h>

void blanc(int n_blanc){
    for(int i=0; i<n_blanc; i++){
        printf("%c",' ');
    }
}
void draw(int colums){
    for(int i=0; i<colums; i++){
        printf("%c%c",'*',i==colums-1 ? '\n' : ' ');
    }
}

void pattern_c(int line){
    int j = 1;
    for (int i = line -1; i >=0; i--)
    {
        // printf("blanc = %d | pt = %d\n",i,j);
        blanc(i);
        draw(j);
        j++;
    }
    
}

void tree_christmas(int pattern,int n_p){
    for (int i=0; i<n_p; i++) {
        pattern_c(pattern);
    }
}
int main(){
    printf("tree christmas\n");

    // pattern_c(9);
    tree_christmas(9, 8);

    return 0;
}