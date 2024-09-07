#include <stdio.h>

int main(){
    const char STOP = '#';
    const char SPACE = ' ';
    const char NEW_LINE = '\n';

    char ch;
    int space_count = 0;
    int new_line_count = 0;
    int ch_count = 0;

    printf("Введите текст чтобы посчитать количество пробелов,\nколичество символов новой строки и количество остальных символов (# - для остановки):\n");

    while((ch = getchar()) != STOP){
        
        if(ch == SPACE)
            space_count++;
        else if(ch == NEW_LINE)
            new_line_count++;
        else
            ch_count++;
    }
    printf("Количество пробелов: %d, количество символов новой строки: %d, всего символов: %d",
            space_count, new_line_count, ch_count);
    
    return 0;


}