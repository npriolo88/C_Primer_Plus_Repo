/* bases.c - выводит число 100 в десятичной, восмеричной и шестнадцатиричной форме */
#include <stdio.h>

int main(){
    int x = 100;
    printf("decimal = %d; octo = %o; heximal = %x\n", x, x, x);
    printf("decimal = %d; octo = %#o; heximal = %#x\n", x, x, x);

    return 0;
}