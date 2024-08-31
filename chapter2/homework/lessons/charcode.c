/*charcode.c - оторбажает кодовое значение символа*/

#include <stdio.h>

int main(){
    char ch;
    printf("Enter any symbol.\n");
    scanf("%c", &ch);
    printf("Code of symbol %c is %d\n", ch, ch);

    return 0;
}