#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(arr+j)>*(arr+j+1)){
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}

void printArray(int *arr, int n){
    for(int i = 0;i <n;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
}

int main(){
    int n;
    printf("정수의 개수를 입력하세요: ");
    scanf("%d",&n);

    int *arr = (int *)malloc(sizeof(int)*n);

    for(int i =0;i<n;i++){
        printf("정수를 입력하세요: ");
        scanf("%d",arr + i);
    }

    bubbleSort(arr,n);

    printf("정렬된 배열:\n");
    printArray(arr,n);

    free(arr);

    return 0;
}