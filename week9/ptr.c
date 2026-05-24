#include<stdio.h>

int main(){

    int arr[8]={12,7,25,3,18,9,30,14};
    int *ptr;

    int sum=0;
    int max,min;

    ptr = &arr[0];

    max = arr[0];
    min = arr[0];

    printf("Array elements:\n");

    for(int i =0;i<8;i++){
        printf("%d ",*(ptr+i));

        sum += arr[i];

        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }

    }

    printf("\n\nSum=%d\n",sum);
    printf("Max = %d\n",max);
    printf("Min=%d\n",min);

    return 0;
}