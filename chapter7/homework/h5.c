#include <stdio.h>
#include <ctype.h>

int main(){
    const char STOP = '#';
    const char DOT = '.';
    const char EXCLAMATION_MARK = '!';

    int ch;
    int dot_to_excl_mark = 0;
    int excl_mark_to_double_excl_mark = 0; 

    while((ch = getchar()) != STOP){
        switch (ch)
        {
            case '.':
                ch = '!';
                putchar(ch);
                dot_to_excl_mark++;
                continue;
            case '!':
                ch  = '!';
                putchar(ch);
                putchar(ch);
                excl_mark_to_double_excl_mark++;
                continue;
            default:
                break;
        }
        putchar(ch);
    }
    printf("Произвдено замен . на ! - %d, замен ! на !! - %d\n", dot_to_excl_mark, excl_mark_to_double_excl_mark);

    return 0;
}