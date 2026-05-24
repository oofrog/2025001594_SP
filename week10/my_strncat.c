#include <stdio.h>

void my_strncat(char *s1,const char *s2,int n){
    
    int i = 0;
    while(*(s1+i)!='\0'){
        i++;
    }
    int j=0;
    for(;j<n;j++){
        *(s1+i+j) = *(s2+j);
    }
    *(s1+i+j) = '\0';

}

int my_strncmp(const char *s1,const char *s2,int n){

    for(int i=0;i<n;i++){
        if(*(s1+i)<*(s2+i)){
            return -1;
        }
        if(*(s1+i)>*(s2+i)){
            return 1;
        }
        if (*(s1 + i) == '\0') {
            return 0;
        }
    }
    return 0;
}

int main(void){
    int n;
    char str1[50];
    char str2[50];
    char str3[100];

    printf("input size n : ");
    scanf("%d",&n);
    printf("input string str1 : ");
    scanf("%s",str1);
    printf("input string str2 : ");
    scanf("%s",str2);

    my_strncat(str1,str2,n);

    printf("strncat result(n is %d) : \"%s\"\n",n,str1);
    printf("strncmp result(n is %d) : %d\n",n,my_strncmp(str1,str2,n));

    return 0;
}