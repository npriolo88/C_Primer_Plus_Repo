#include <stdio.h>

int main(){
    float chashka;
    
    scanf("%f", &chashka);

    float pinta = 2.0 * chashka;
    float ouncia = chashka / 8;
    float st_lozhka = ouncia / 2;

    printf("pintas = %f\n", pinta);
    printf("ouncia = %f\n", ouncia);
    printf("st_lozhka = %f\n", st_lozhka);
    printf("ch_lozhka = %f\n", st_lozhka / 3);

    return 0;
}