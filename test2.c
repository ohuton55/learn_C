#include<stdio.h>
<<<<<<< HEAD
#include<stdlib.h>

int main(void)
{
    int data[2][3] = { {1,2,3},
                        {4,5,6} };
    int data2[2][3] = { 1,2,3,4,5,6 };

    printf("data[1][1]=%d\n", data[1][1]);
    printf("data2[2][3]=%d\n", data2[2][3]);

    for (int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            printf("data[%d][%d] = %d\n", i, j, data[i][j]);
=======

int main(int argc, char *argv[])
{
    char buffer[100];
    printf("Enter: ");
    //scanf("%s", buffer);    // space is done
    fgets(buffer, 100, stdin);  // input from terminal to buffer. can contains space.
    printf("Buffer: %s\n", buffer);
>>>>>>> 9332fec85bcef7a70307b8dddd59bfe4bf6619c6

    return 0;
}