#include <stdio.h>

int main(void){

    int i =0,power=2048;
    
    for(;(power/=2)>0;){
        printf("%-6d",power);
    }
}