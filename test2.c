#include<stdio.h>

int main(int argc, char *argv[])
{
    // (type) expression
    // (bouble) a
    int a = 5;
    int b = 2;  // b id upgraded to double
    double c = (double)a / b;   // conversion first a
    //double c = (double)(a / b);   // conversion after a / b

    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d / %d = %f\n", a, b, c);
    return 0;
}