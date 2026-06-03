#include <stdio.h>
#include "head.h"
#define INF 0x3f3f3f3f

int div(int a,int b){
    return b!=0?(int)(a/b):INF;
}