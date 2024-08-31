#include <stdio.h>

double Farenheit;
double Kelvin;
double Celsius;
int ReadedElements;

void Temperatures(double Farenheit);

int main(){
    printf("Введите температуру по Фаренгейту (q - чтобы выйти) : ");
    ReadedElements = scanf("%lf", &Farenheit);
    while(ReadedElements > 0){
        Temperatures(Farenheit);
        printf("Введите температуру по Фаренгейту чтобы продолжить (q - чтобы выйти): ");
        ReadedElements = scanf("%lf", &Farenheit);
    }
    return 0;
}

void Temperatures(double Farenheit){
    const double ABSOLUTE_ZERO = 273.16;
    const double RELATIVE_COEFF = 5.0/9.0;
    const double F_C_DIFFERENCE = 32.0;
    Celsius = RELATIVE_COEFF * (Farenheit - F_C_DIFFERENCE);
    Kelvin = Celsius + ABSOLUTE_ZERO;
    printf("%.2lf в градусах Фаренгейта - это:\n", Farenheit);
    printf("Температура в градусах Цельсия: %.2lf\n", Celsius);
    printf("Температура в Кельвинах: %.2lf\n", Kelvin);
    printf("-------------------------\n");

}