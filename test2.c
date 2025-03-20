#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        int num_times = atoi(argv[2]);
    
        for (int i = 0; i < num_times; i++)
            printf("%s\n", argv[1]);

    }
    else
    {
        printf("2 argument except.\n");
        printf("1st - string to print out\n");
        printf("2st - # of times to print\n");
        return 1;
    }

}