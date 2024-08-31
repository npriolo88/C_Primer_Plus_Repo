#include <stdio.h>

int main(){
    float height_in_centimeters;
    float height_in_inches;

    printf("Please enter your height in centimeters: ");
    scanf("%f", &height_in_centimeters);
    printf("Your height in inches is %.2f\n", height_in_centimeters/2.54);

    printf("Please enter your height in inches: ");
    scanf("%f", &height_in_inches);
    printf("Your height in centimeters is %.2f\n", height_in_inches*2.54);

    return 0;
}