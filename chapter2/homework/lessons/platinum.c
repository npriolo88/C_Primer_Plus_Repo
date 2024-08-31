/*platinum.c - ваш вес в платиновом эквиваленте*/
#include <stdio.h>

int main(){
    float weight;
    float value;

    printf("Хотите узнать ваш вес в платиновом эквиваленте?\n");
    printf("Давайте подсчитаем...\n");
    printf("Пожалуйста, введите ваш вес, выраженный в фунтах: ");

    scanf("%f", &weight);

    value = 1700.0 * weight * 14.5833;
    printf("Ваш вес в платиновом эквиваленте составляет $%.2f.\n", value);

    return 0;
}