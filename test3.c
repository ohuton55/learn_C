#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Include for strlen

int main(void)
{
    char *password;
    char *other_ptr;

    password = malloc(10 * sizeof(char));   // return a memory address
    printf("\nTrustworthy programs\n\n");
    printf("Enter your password: ");
    scanf("%s", password);

    other_ptr = password;
    
    free(password);
    
    int length = strlen(password);
    for (int i = 0; i < length; i++)
        printf("%c", other_ptr[i]);
    
    printf("\n");

    return 0;
}