#include <stdio.h>

int main(){

    int top, bottom;
    printf("Введите нижний и верхний предел чисел: ");

    scanf("%d %d", &bottom, &top);

    for(int i = bottom; i <= top; i++){
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    printf("Готово!");

    return 0;



}