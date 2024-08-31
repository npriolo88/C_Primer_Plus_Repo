#include <stdio.h>
#define SQUARES 64
int main(){
    const double CROP = 2E16;
    double current, total;
    int count = 1;
    printf("клетка    добавлено    итого    процент от\n");
    printf("          зерен        зерен  мирового урожая\n");
    
    total = current = 1.0;
    printf("%2d %12.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    while(count < SQUARES)
    {
        count = count + 1;
        current = 2*current;
        total = total + current;
        printf("%2d %12.2ed %12.2e %12.2e\n", count, current, total, total/CROP);
    }
    printf("Вот и все.\n");

    return 0;
}