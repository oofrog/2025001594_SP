#include <stdio.h>

void changeVal(int a[]){
    a[3]=20;
    printf("%d\n",a[3]); // 20
}

int main(void){
    int arr[5]={1,2,3,4,5};
    changeVal(arr);
    printf("%d\n",arr[3]); // 20
    return 0;
}