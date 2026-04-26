#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int i,n;

    srand(time(NULL));

    printf("Some randomly distributed integers will be printed.\n");
    printf("How many do you want to See? ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(i%10==0){
            putchar('\n');
        }
        printf("%3d",rand()%99);
    }
    printf("\n\n");

    return 0;
}