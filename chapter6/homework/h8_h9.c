#include <stdio.h>

float processing(float first, float second);

int main(){
    float first, second;
    printf("Введите два числа с плавающей точкой: ");
    int valid = (scanf("%f %f", &first, &second) == 2);

    while(valid){
        printf("%f\n", processing(first, second));
        printf("Введите два числа с плавающей точкой (или q чтобы выйти): ");
        valid = scanf("%f %f", &first, &second);
    }

    printf("Готово!");

}

float processing(float first, float second){
    return (second - first)/(second * first);
}