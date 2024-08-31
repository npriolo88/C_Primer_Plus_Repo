#include <stdio.h>

int main(){
    char kek = 150;
    kek = kek + 1000;
    printf("kek + 1000 = %c\n", kek);

    int test_int = 400;
    printf("test_int - 4294966897 = %d\n", test_int-4294966897);

    float big = 3.4E38;
    big = big * 100.0;
    printf("big * 100 = %e\n", big);
    
    return 0;
}