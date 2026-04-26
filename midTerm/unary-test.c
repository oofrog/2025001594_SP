#include <stdio.h>

int main(void){

    int a=5;
    printf("%d\n",a++ - 3);//2
    printf("%d\n",a);//6
    printf("%d\n",--a - -3);//8
    printf("%d\n",a);//5

    return 0;
}