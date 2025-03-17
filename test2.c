#include<stdio.h>
#include <stdlib.h> // dynamically allocated memory libruary

// void add_one(int *array, int length);
// int fund(void);

int main(void)
{
    // int a[] = {1,2,3,4,5,6,7,8,9,10};
    // add_one(a + 5, 5);
    // for (int i = 0; i < 10; i++)
    //     printf("a[%d] = %d\n", i, a[i]);
    // int a = 5;
    // int b = 6;
    // func();

    int *a;
    a = malloc( sizeof(int) * 5 );   // allocation block space
    a[0] = 1;
    a[1] = 5;
    a[2] = 7;
    a[3] = 9;
    a[4] = 11;
    for (int i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);
    
    int *b;
    b = calloc( 5, sizeof(int) );   // allocation block space
    b[0] = 1;
    b[1] = 5;
    b[2] = 7;
    b[3] = 9;
    b[4] = 11;
    for (int i = 0; i < 5; i++)
        printf("b[%d] = %d\n", i, b[i]);

    free(a);    // don't forget free
    free(b);
    return 0;
}

// int fund(void)
// {
//     int c = 8;
//     int d = 10;
//     int e[10];
//     int f = 9;
//     // I can't extention array e[]
// }

// void add_one(int *array, int length)
// {
//     for (int i = 0; i < length; i++)
//         array[i] += 1;
// }