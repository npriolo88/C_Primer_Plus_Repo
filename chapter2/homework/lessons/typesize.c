#include <stdio.h>

int main(){

    printf("Тип int имеет размер %zd байтов\n", sizeof(int));
    printf("Тип char имеет размер %zd байтов\n", sizeof(char));
    printf("Тип long имеет размер %zd байтов\n", sizeof(long));
    printf("Тип long long имеет размер %zd байтов\n", sizeof(long long));
    printf("Тип double имеет размер %zd байтов\n", sizeof(double));
    printf("Тип long double имеет размер %zd байтов\n", sizeof(long double));
    printf("Тип int32_t имеет размер %zd байтов\n", sizeof(__int32_t));
    return 0;
}