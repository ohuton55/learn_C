#include<stdio.h>

int main(void)
{
    int a = 5;
    int b = 10;
    int *p;
    p = &b;
    printf(" p: %p\n", p);
    printf("&b: %p\n", &b);
    printf("&a: %p\n", &a);
    printf("*p:%d\n", *p);
    
    
    a = a + *p;
    printf(" a: %d\n", a);
    
    p = &a;
    printf(" p:%d\n", p);
    *p = *p + 1;
    printf("&a:%d\n", &a);
    printf(" a:%d\n", a);

    return 0;
}