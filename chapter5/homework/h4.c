#include <stdio.h>

const float CENTIMETERS_PER_FOOT = 30.48;
const float FOOT_PER_INCHES = 0.083;

int main(){
    printf("Введите высоту в см (<= 0 для выхода): ");
    float height_cm;
    scanf("%f", &height_cm);

    while (height_cm > 0)
    {
        int foot = height_cm / CENTIMETERS_PER_FOOT;
        float foot_left = (height_cm / CENTIMETERS_PER_FOOT) - foot;
        float inch = foot_left / FOOT_PER_INCHES;

        printf("%.1f см = %d футов, %.1f дюймов\n", height_cm, foot, inch);
        printf("Введите высоту в см (<= 0 для выхода): ");
        scanf("%f", &height_cm);

    }
    
    return 0;

}