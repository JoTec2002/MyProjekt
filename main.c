#include <stdio.h>
#include "sub.h"
#include "add.h"

int main(){
    printf("This is my calculator\n");

    double x = 2;
    double y = 3;
    printf("%lf - %lf = %lf\n", x,y,mySubFcn(x,y));
    
    double x = 1;
    double y = 2;
    printf("%lf + %lf = %lf", x,y,myAddFcn(x,y));    

    return 0;
}