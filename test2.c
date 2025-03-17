#include<stdio.h>

void add_one(int *a);
void add_one_trio(int *a, int *b, int *c);
void add_one_array(int array[], int length);
void add_one_array_star(int *array, int length);

int main(void)
{
    int b = 5;
    printf("&b: %p\n", &b);
    add_one(&b);
    printf("b: %d\n", b);

    int x1 = 1, x2 = 2, x3 = 3;
    add_one_trio(&x1, &x2, &x3);
    printf("x1: %d\n", x1);
    printf("x2: %d\n", x2);
    printf("x3: %d\n", x3);

    int a[] = {1,2,3};
    add_one_array(a, 3);
    for (int i = 0; i < 3; i++)
        printf("a[%d]=%d\n", i, a[i]);
        
    add_one_array_star(a, 3);
    for (int i = 0; i < 3; i++)
        printf("a[%d]=%d\n", i, a[i]);

    int *p;
    p = a;
    printf("p: %p\n", p);
    printf("a: %p\n", a);

    printf("p[2] = %d\n", p[2]);
    printf("a[2] = %d\n", a[2]);

    // point rotation like this
    printf("*p = %d\n", *p);
    printf("*(p + 1) = %d\n", *(p + 1));
    printf("*(p + 2) = %d\n", *(p + 2));
    printf("*(a + 1) = %d\n", *(a + 1));
    printf("*(a + 2) = %d\n", *(a + 2));

    
    return 0;
}

void add_one(int *a)
{
    printf(" a: %p\n", a);
    *a = *a + 1;
}
void add_one_trio(int *a, int *b, int *c)
{
    *a = *a + 1;
    *b = *b + 1;
    *c = *c + 1;
}
void add_one_array(int array[], int length)
{
    for (int i = 0; i < length; i++)
        array[i] += 1;
}
void add_one_array_star(int *array, int length)
{
    for (int i = 0; i < length; i++)
        array[i] += 1;
}