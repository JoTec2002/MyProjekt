#include <stdio.h>
#include "add.h"

int main(){
    printf("This is my calculator\n");

    double x = 1;
    double y = 2;
    printf("%lf + %lf = %lf", x,y,myAddFcn(x,y));    

    return 0;
}