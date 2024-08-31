/*print2.c - дополнительные свйоства функции printf()*/
#include <stdio.h>
int main(){
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u, no %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld, no %hd\n", big, big);
    printf("verybig = %lld, no %ld\n\a", verybig, verybig);

    return 0;
}