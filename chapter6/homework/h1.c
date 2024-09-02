#include <stdio.h>

int main(){

    char alphabet[26];
    char ch;
    for(int i = 0, ch = 'A'; i < 26, ch <= 'Z'; i++, ch++){
        alphabet[i] = ch;
        printf("%c\n", alphabet[i]);
    }

    return 0;
}