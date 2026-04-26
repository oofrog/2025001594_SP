#include<stdio.h>

int main(int argc, char *argv[]){
    
    double x;
    double sqrt;
    double temp=0;

    printf("insert non-negative number x : ");
    scanf("%lf", &x);

    sqrt = x;

    if(x==0){
        sqrt = 0;
    }else{
        while(sqrt!=temp){
            temp = sqrt;
            sqrt = (temp+x/temp)/2;
        }
    }

    printf("\nsqrt(x) = %10lf, sqrt(x)^2 = %.30e\n", sqrt,sqrt*sqrt);

    return 0;
}