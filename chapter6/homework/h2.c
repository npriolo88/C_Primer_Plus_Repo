#include <stdio.h>

int main(){

    

    for(int row = 0; row <= 5; row++){
        for(int i = 1; i <= row; i++)
            printf("%c", '$');
        printf("\n");
    }

    return 0;
}