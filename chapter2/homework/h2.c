
#include <stdio.h>

int main(){
    int symbol;

    printf("Enter a number and i will covnert it to ASII: \n");
    scanf("%d", &symbol);
    printf("You entered a %d which is %c in ASCII", symbol, symbol);

    return 0;
}