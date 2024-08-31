#include <stdio.h>

int main(){

    int num = 0;
    int count = 0;
    int res = 0;
    int how;
    scanf("%d", &how);
    printf("----------\n");

    while(count++ < how){
        num = count * count;
        res += num;
    }

    printf("%d ", res);

    return 0;
}