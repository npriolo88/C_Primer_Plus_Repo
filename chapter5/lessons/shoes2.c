/*shoes2.c - вычисляет длину стопы для нескольких размеров обуви*/
#include <stdio.h>

#define ADJUST 7.31

int main(){
    const double SCALE = 0.333;
    double shoe, foot;
    printf("Размер обуви (мужской)      длина ступни\n");
    shoe = 3.0;

    while(shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %20.2f дюймов\n", shoe, foot);
        shoe = shoe + 1;
    }
    printf("Если обувь подходит, носите её.\n");

    return 0;
    
}