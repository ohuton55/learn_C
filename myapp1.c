#include <stdio.h>
#include <stdlib.h>

typedef int CAT;
#define CATS

int count_cat();

int main(void)
{
    CAT cat = 1;
    int *cats = malloc( sizeof(int) * 2);
    for (int i = 0; i < 2; i++)
        cats[i] = i;

    printf("max cat is %d!\n", cat);    
    printf("max cat is %d!\n", cats[1]);  
    printf("max cat is %d!\n", &cats);  
    free(cats);
    
    count_cat();

    return 0;
}

int count_cat()
{
    printf("Please answer how many cats?:\n");
    int user_answer;
    
    while (user_answer != 0)
    {
        printf("If you want to exit, please enter 0\n");
        scanf("%d", &user_answer);
        
        for (int i = 0; i < user_answer; i++)
            printf("%d cats be around you\n", i + 1);
    }
    return 0;
}