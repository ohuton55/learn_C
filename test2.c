#include<stdio.h>
#include<stdlib.h>

#define LINE_BUFFER 100
#define NUM_BUFFER 100

int main(int argc, char *argv[])
{
    FILE *fh_read;
    fh_read = fopen("write.txt", "r");

    // if we can't open it return null
    if (fh_read == NULL)
    {
        printf("file could not be opend\n");
        return 1;
    }
    else
    {
        char buffer[LINE_BUFFER];   // store each file contents to buffer
        int data[NUM_BUFFER];
        int i = 0;
        while (fgets(buffer, 100, fh_read) != NULL)
        {
            printf("%s\n", buffer);
            data[i] = atoi(buffer);
            i++;
        }    // count of 100
        fclose(fh_read);

        int total = 0;
        int num_lines = i;
        for (int j = 0; j < num_lines; j++)
        {
            printf("data[%d] = %d\n", j, data[j]);
            total += data[j];
        }
        printf("avg: %d\n", total / num_lines);
    }
    return 0;
}