/*show_pt.c - отображает значение типа float двумя способами*/
#include <stdio.h>

int main(){
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f может быть записано как %e\n", aboat, aboat);
    printf("И его %a в шестнадцатиричной, представляющей степени 2, форме записи\n", aboat);
    printf("%f может быть записано как %e\n", abet, abet);
    printf("%Lf может быть записано как %Le\n", dip, dip);

    return 0;
}