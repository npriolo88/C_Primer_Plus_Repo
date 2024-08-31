#include <stdio.h>
#include <windows.h>

void Temperatures(double farenheit);

int main(){
    double farenheit;
    SetConsoleOutputCP(CP_UTF8); /// отображение в виде кирилицы
    printf("Введите температуру по Фаренгейту (q - чтобы выйти) : ");
    while(scanf("%lf", &farenheit) == 1){
        Temperatures(farenheit);
        printf("Введите температуру по Фаренгейту чтобы продолжить (q - чтобы выйти): ");
    }
    return 0;
}

void Temperatures(double farenheit) {
    double kelvin;
    double celsius;
    const double ABSOLUTE_ZERO = 273.16;
    const double RELATIVE_COEFF = 5.0/9.0;
    const double F_C_DIFFERENCE = 32.0;
    celsius = RELATIVE_COEFF * (farenheit - F_C_DIFFERENCE);
    kelvin = celsius + ABSOLUTE_ZERO;
    printf("%.2lf в градусах Фаренгейта - это:\n", farenheit);
    printf("Температура в градусах Цельсия: %.2lf\n", celsius);
    printf("Температура в Кельвинах: %.2lf\n", kelvin);
    printf("-------------------------\n");

}