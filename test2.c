#include<stdio.h>
#include<stdlib.h>

#define NAME 5

int y = 10; // global valuable cause hard understand

void func();

int main(int argc, char *argv[])
{
    int y = 2;
    printf("y: %d\n", y);
    printf("%d\n", NAME);
    
    // I can't assignment again this value
    const int x = 5;
    y++;
    
    printf("%d\n", x + 2);
    func();

    return 0;
}

void func()
{
    // const value can't access here
    printf("%d\n", NAME);
    y++;
    printf("y: %d\n", y);
}