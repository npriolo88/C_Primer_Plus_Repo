#include <stdio.h>

int main(){
    float molecula_mass = 3.0e-23;
    int quart_mass = 950;
    int volume;

    printf("Please enter V of water in quarts: ");
    scanf("%d", &volume);
    printf("The %d quarts of water contains %e moleculus", volume, volume*quart_mass/molecula_mass);

    return 0;
}