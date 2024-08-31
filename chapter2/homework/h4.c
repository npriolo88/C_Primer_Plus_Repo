#include <stdio.h>

int main(){
    float input_data;
    printf("Введите число с плавающей запятой: ");
    scanf("%f", &input_data);

    printf("Запись с фиксрованной запятой: %f\n", input_data);
    printf("Экспоненциальная форма записи: %e\n", input_data);
    printf("Двоично-экспоненциальная форма записи: %a", input_data);
    
    return 0;
}