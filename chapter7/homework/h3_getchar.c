/*используя getchar*/
/*лютый кал*/
#include <stdio.h>
#include <ctype.h>

int main(){

    char ch;
    int even_cnt = 0;
    int even_sum = 0;
    int even_mean = 0;
    int odd_cnt = 0;
    int odd_sum = 0;
    int odd_mean = 0;


    printf("Введите последовательность целых чисел без пробела (0 - чтобы закончить): \n");

    while((ch = getchar()) != '0'){
        if(isdigit(ch)){
            if(ch % 2 == 0){
                even_cnt++;
                even_sum = even_sum + (ch - '0');
                even_mean = even_sum / even_cnt;
            }
                
            if(ch % 2 != 0 ){
                odd_cnt++;
                odd_sum = odd_sum + (ch - '0');
                odd_mean = odd_sum / odd_cnt;
            }
                
        } 
    }
    printf("Количество четных чисел = %d, количество нечетных чисел = %d. Среднее четных = %d, Среднее нечетных = %d.\n", 
    even_cnt, odd_cnt, even_mean, odd_mean);

    return 0;
}