#include <stdio.h>
#include <ctype.h>

int main(){
    const char STOP = '#';
    const char DOT = '.';
    const char EXCLAMATION_MARK = '!';

    int ch;
    int dot_to_excl_mark = 0;
    int excl_mark_to_double_excl_mark = 0; 

    while((ch = getchar()) != EOF){
        if(ch == STOP)
            break;
        if(ch == DOT){
            ch = '!';
            putchar(ch);
            dot_to_excl_mark++;
            continue;
        }
        if(ch == EXCLAMATION_MARK){
            ch  = '!';
            putchar(ch);
            putchar(ch);
            excl_mark_to_double_excl_mark++;
            continue;
        }
       putchar(ch); 
    }
    printf("Произвдено замен . на ! - %d, замен ! на !! - %d\n", dot_to_excl_mark, excl_mark_to_double_excl_mark);

    return 0;


}