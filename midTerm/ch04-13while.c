#include<stdio.h>

int main(void){

    int n,start,end;
    int sum=0;

    scanf("%d",&n);

    if (n>=0){
        start=n;
        end=2*n;
    }else{
        start=2*n;
        end=n;
    }

    int i = start;
    while(i<=end){
        sum +=i;
        i++;
    }

    printf("%d",sum);

    int x,y,z,w;
    (x>y)?
        ((x>z)?
            ((x>w)?x:w)
            :
            ((z>w)?z:w))
        :
        ((y>z)?
            ((y>w)?y:w)
            :
            ((z>w)?z:w));

}