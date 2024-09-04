#include <stdio.h>
#include <string.h>
int main(){
    char word[6];

    printf("Введите слово:");

    scanf("%s", word);

    for(int i = 0; i < (strlen(word)/2); i++){
        char num = word[i];
        word[i] = word[strlen(word)-i-1];
        word[strlen(word)- 1 - i] = num;
        
        
    }

    printf("%s", word);

    return 0;
}