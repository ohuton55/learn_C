#include<stdio.h>

int main(int argc, char *argv[])
{
    char buffer[100];
    printf("Enter: ");
    //scanf("%s", buffer);    // space is done
    fgets(buffer, 100, stdin);  // input from terminal to buffer. can contains space.
    printf("Buffer: %s\n", buffer);

    return 0;
}