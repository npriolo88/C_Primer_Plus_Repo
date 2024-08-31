#include <stdio.h>

int main(){
    int your_age;
    float sec_in_year = 3.156e7;

    printf("Please enter your age: ");
    scanf("%d", &your_age);
    printf("Your age in seconds approximatly is %e", your_age*sec_in_year);
}