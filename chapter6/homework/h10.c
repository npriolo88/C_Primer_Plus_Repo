#include <stdio.h>

int main(){
    int bottom, top;
    int sum = 0;
    printf("Введите нижний целочисленный предел и верхний целочисленный предел\n");
    printf("Будет вычислена сумма квадратов чисел, начиная от нижнего\n");
    printf("заканчивая верхним пределом: ");
    scanf("%d %d", &bottom, &top);
    printf("---------------\n");

    while(bottom != top){
        for(int i = bottom; i <= top; i++){
        sum = sum + (i*i);
    }
    printf("%d\n", sum);
    printf("Введите следующую комбинацию пределов (одинаковые числа чтобы выйти):");
    scanf("%d %d", &bottom, &top);
    }

    printf("Готово!");
    return 0;
}