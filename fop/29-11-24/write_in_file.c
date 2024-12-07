#include <stdio.h>


int main(){
    printf("write in file\n");
    FILE *f = fopen("write.txt", "w");
    fprintf(f,"I'm going to write a string in my file.%s\n",__FILE_NAME__);
    fclose(f);
    return 0;
}