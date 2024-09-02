#include <stdio.h>

int main(){
    char ch = 'A';
    int rows, size;
    for(rows = 0; rows < 6; ++rows){
        for(size = 0; size < rows + 1; ++size){
            printf("%c", ch);
            ch++;
        }    
        printf("\n");
    }

}