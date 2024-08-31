#include <stdio.h>

double cube(double input);

int main(){

    double input;
    scanf("%lf", &input);
    printf("%.1lf", cube(input));
    return 0;
    
}

double cube(double input){
    return input * input * input;
}
    
