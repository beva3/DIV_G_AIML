#include <stdio.h>
#include <stdlib.h>

/** 
 * operation in file :
 *      open file
 *      action:
 *      close file
 * 
 *  Here isa quick practice exercise to help you sharpen your skill in FILE
 *  Task :
 *      1- writes some user input to a file
 *      2- Read the content from the file abd diplay
 * 
 *  Steps to follow:
 *      1. Creat/opnet a file from writing
 *      2. Prompt the user to Enter some text
 *      3. Write the user input to the file
 *      4. Close the file
 *      5. Open the file for reading
 *      6. Read and display the contents from the file    
*/

int main(){
    printf("file ...\n");
    FILE *f = NULL;
    f = fopen("file.txt", "r");
    char row[256];
    printf("size row : %zu\n",sizeof(row));

    // checking if the file is opened successfully

    if (f == NULL){
        printf("The file is is not opened, the program will exit\n");
        exit(0);
        
    }

    while (fgets(row, sizeof(row), f) != NULL) {
        printf("%s",row);
    }
    fclose(f);
    return 0;
}