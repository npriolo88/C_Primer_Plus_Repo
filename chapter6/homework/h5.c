#include <stdio.h>

int main(){
    char limit, i, ch, space;
    
    printf("Введите букву и я сформирую пирамидку: ");
    scanf("%c", &limit);
    printf("Формирую пирамидку...\n");

    int size = limit - 'A';
    
    for(i = 'A'; i <= limit; ++i, --size)
    {
        for (space = 0; space < size; ++space)
            printf(" ");
        for (ch = 'A'; ch <= i; ++ch)
            printf("%c", ch);
        for (ch = ch - 2; ch >= 'A'; --ch)
            printf("%c", ch);

        printf("\n");
    }
        
    
    return 0;
}