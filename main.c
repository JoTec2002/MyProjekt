#include <stdio.h>
include "sub.h"

int main(){
    printf("This is my calculator\n");

    double x = 2;
    double y = 3;
    printf("%lf - %lf = %lf\n", x,y,mySubFcn(x,y));

    return 0;
}