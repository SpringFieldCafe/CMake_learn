#include <stdio.h>
#define NUMBER 10

int main(){
    auto a=10;
#ifdef DEBUG
        printf("A DEBUG MACRO\n");
#endif 
    int i=NUMBER;
    for(i;i>2;i/2){
        printf("GCC\n");
    }    
}