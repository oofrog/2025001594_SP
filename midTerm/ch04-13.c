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

    for(int i=start;i<=end;i++){
        sum+=i;        
    }

    printf("%d",sum);

}