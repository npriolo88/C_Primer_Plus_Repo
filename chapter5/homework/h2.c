#include <stdio.h>

int input_digit;
int output_digit;

int main(){

    printf("Введите целое число: ");
    scanf("%d", &input_digit);
    output_digit = input_digit + 10;
    while (input_digit < output_digit + 1)
    {
        printf("%d\n", input_digit);
        input_digit++;
    }
    
    return 0;

}