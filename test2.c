#include<stdio.h>

int main(int argc, char *argv[])
{
    FILE *fh_write; // file handle variable

     // w:open write.txt with write mode
     // a:open write.txt with add mode
     // return file handle
    fh_write = fopen("write.txt", "a");
    if (fh_write == NULL)
    {
        printf("Error opening FILE!");
        return 1;
    }
    else
    {
        for (int i = 0; i < 10; i++)
            // print on file handler
            fprintf(fh_write, "%d\n", (i+1));
        fclose(fh_write);
    }

    return 0;
}