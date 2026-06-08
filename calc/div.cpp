#include <stdio.h>
#include "calc.h"
#define INF 0x3f3f3f3f

int div_1(int a,int b){
    return b!=0?(int)(a/b):INF;
}