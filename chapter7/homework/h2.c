#include <stdio.h>

int main(){
    const char STOP = '#';
    char ch;
    int ascii;
    int char_count = 0;
    while((ch = getchar()) != STOP){
        if(ch != '\n'){
            ++char_count;
            ascii = (int)ch;
            printf("%c---%d ", ch, ascii);
            if(char_count % 8 == 0){
                printf("\n");
            }
        }  
    }
}

