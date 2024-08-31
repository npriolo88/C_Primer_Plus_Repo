#include <stdio.h>

int main(){

    int num = 0;
    int count = 0;
    int how;
    scanf("%d", &how);
    printf("----------\n");

    while(count++ < how){
        num = num + count;
        printf("%d ", num);
    }

    return 0;
}