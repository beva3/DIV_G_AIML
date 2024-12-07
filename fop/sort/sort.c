#include <stdio.h>
#include <string.h>

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
void sort(char *str){
    int len = strlen(str);
    for (int i = 0 ; i<len; i++)
    {
        for (int j = 0 ; j < len - 1; j++){
            if (str[j] > str[j + 1]){
                char tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
        }
    }
}

void sort_int(int arr[], int len){
    for (int i = 0 ; i<len; i++)
    {
        for (int j = 0 ; j < len - 1; j++){
            if (arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
void print_array(int arr[], int len){ 
    for (int i = 0 ; i < len; i++) {
        printf("arr[%02d] = %4d\n", i, arr[i]);
    }
}
int main(){
    printf("sorting\n");
    int i = 0;
    char str[] = "qwerty";
    // printf("%c\n",str[i]);
    // printf("%c\n",str[i+1]);
    swap(str + i, str+(i+1));
    printf("%s\n",str);
    sort(str);
    printf("%s\n",str);
    int arr[] = {1,4,0,3,-3,8};
    int len =  sizeof(arr)/sizeof(arr[0]);
    sort_int(arr, len);
    print_array(arr, len);
    return 0;
}
