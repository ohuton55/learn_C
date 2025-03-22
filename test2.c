#include<stdio.h>
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

    return 0;
}