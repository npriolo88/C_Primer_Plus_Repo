/*print1.c -демонстрирует некоторые свойсвта функции printf*/
#include "stdio.h"

int main(){
    int ten = 10;
    int two = 2;

    printf("Выполняется правильно: ");
    printf("%d minus %d equal %d\n", ten, 2, ten - two);
    printf("Выполняется неправильно: ");
    printf("d minus %d equal %d\n", ten); // пропущены два аргумента

    return 0;
}