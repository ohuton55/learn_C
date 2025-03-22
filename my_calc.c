#include <stdio.h>

int add(int i, int ii);
int minus(int i, int ii);
int multiple(int i, int ii);
int division(int i, int ii);

int result = 0;
int main(void)
{
    int i1 = 0;
    int i2 = 0;
    int how_calc = 0;

    printf("Please enter values what you want?\n");
    printf("value 1: ");
    scanf("%d", &i1);
    printf("value 2: ");
    scanf("%d", &i2);
    printf("How to calculate? Please answer with number. add=1, minus=2, multiple=3, division=4: ");
    scanf("%d", &how_calc);
    
switch (how_calc) {
    case 1:
        add(i1, i2);
        break;
    case 2:
        minus(i1, i2);
        break;
    case 3:
        multiple(i1, i2);
        break;
    case 4:
        division(i1, i2);
        break;
}

    printf("result : %d\n", result);

    return 0;
}

int add(int i, int ii) { result = i + ii; return 0; }
int minus(int i, int ii) { result = i - ii; return 0; }
int multiple(int i, int ii) { result = i * ii; return 0; }
int division(int i, int ii) { result = i / ii; return 0; }