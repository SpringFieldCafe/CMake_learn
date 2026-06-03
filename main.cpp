#include<stdio.h>
#include"head.h"

int main(){
    int a=30;
    int b=40;
    printf("a+b=%d \n",add(a,b));
    printf("a-b=%d \n",dif(a,b));
    printf("a*b=%d \n",mul(a,b));
    printf("b/a=%d \n",div(b,a));
    printf("a/0=%d \n",div(a,0));
}