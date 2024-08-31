#include <stdio.h>

int main(){
    int first, second;
    printf("Эта программа вычисляет результаты деления по модулю\n");
    printf("Введите число, которое будет служить вторым операндом: ");
    scanf("%d", &second);
    printf("Введите первый операнд: ");
    scanf("%d", &first);
    while(first > 0){
        int res = first % second;
        printf("%d %% %d равно %d\n", first, second, res);
        printf("Введите следующее число для первого операнда (<= 0 для выхода): ");
        scanf("%d", &first);

    }
    printf("Готово!\n");
    return 0;
}