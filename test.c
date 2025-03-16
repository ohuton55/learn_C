#include <stdio.h>
#include <string.h>
#include <ctype.h>

int find_max(int a, int b);
float triple(float n);
double add(double x, double y);
double mult(double x, double y);
double power(double x, int n);
void print_two(float a, float b);
void add_one(int array[], int length);

int main(void)
{
/*
    multi comment
    multi comment
    multi comment
*/
    // print 3 lines
    printf("Hello, World\n");

    // int speed = 0;
    // int time = 0;
    // printf("Speed: ");
    // scanf("%d", &speed);
    // printf("Time: ");
    // scanf("%d", &time);

    // int distance = speed * time;

    // printf("dist: %d\n", distance);

    // float x = 5.2;
    // double y = -9.8;

    // printf("x: ");
    // scanf("%f", &x);
    // printf("x: %f\n", x);

    // printf("y: ");
    // scanf("%lf", &y);
    // printf("y: %f\n", y);

    // char c = 'd';
    // printf("c: ");
    // scanf("%c", &c);
    // printf("c: %c\n", c);
    // printf("c: %d\n", c);
    
    // double x = 5.2, y = 2.5;
    // double mult = x * y;
    // double add = x + y;
    // double div  = x / y;
    // double sub = x - y;

    // printf("mult: %f\n", mult);
    // printf("add: %f\n", add);
    // printf("div: %f\n", div);
    // printf("sub: %f\n", sub);

    // int div = x / y;
    // printf("div: %d\n", div);
    // int x = 14, y = 3;
    // int mod = x % 2;
    // printf("mod: %d\n", mod);

    // int grade = 0;
    // printf("Grade: ");
    // scanf("%d", &grade);

    // if (grade >= 90)
    // {
    //     printf("A\n");
    // }
    // else if (grade >= 80) printf("B\n");
    // else if (grade >= 70) printf("C\n");
    // else if (grade >= 60)
    // {
    //     printf("D\n");
    // }
    // else printf("Fail\n");

    // int height = 0;
    // printf("height: ");
    // scanf("%d", &height);

    // if (height == 160)
    //     printf("Height is 160!\n");
    // else
    //     printf("Height is not 160!\n");

        // char mydata[5];
        // mydata[0] = 'a';
        // mydata[1] = 'b';
        // mydata[2] = 'c';
        // mydata[3] = 'd';
        // mydata[4] = '\0';
        // printf("mydata[2] = %c\n", mydata[2]);
        // printf("\n%s\n", mydata);

        // char s1[] = "This is my string.";
        // for (int i = 0; i < 19; i++)
        // {
        //     if (s1[i] == '\0')
        //         printf("s1[%d] = \\0 \n", i);
        //     else
        //         printf("s1[%d] = %c\n", i, s1[i]);
        // }
        // printf("\n%s\n", s1);

        // char s1[20];
        // printf("Enter: ");
        // scanf("%s", s1);
        // int i = 0;
        // while (s1[i] != '\0')
        // {
        //     if (s1[i] == '0')
        //         printf("found 0\n");
        //     i++;
        // }
        // printf("s1: %s\n", s1);

        // char s1[] = "This is the way.";

        // int length = strlen(s1);
        // int num_ws = 0;
        // for (int i = 0; i < length; i++)
        //     if (s1[i] == 'w') num_ws++;

        // printf("length: %d\n", length);
        // printf("Number of ws: %d\n", num_ws);

        // char s2[50] = "The first sentence.";
        // char s3[] = "The second sentence.";
        // strcat(s2, s3);
        // printf("s2 %s\n", s2);

        // char s1[] = "this is a string.";
        // char s2[] = "this is A string.";
        // if (strcmp(s1,s2) == 0)
        //     printf("s1 and s2 are equal\n");

        // char s[] = "This IS the Way.";
        // int length = strlen(s);
        // for (int i = 0; i < length; i++)
        // {
        //     printf("%c ", s[i]);
        //     if (isupper(s[i]))
        //         s[i] = tolower(s[i]);
        //     else if (islower(s[i]))
        //         s[i] = toupper(s[i]);
        // }

        // printf("s: %s\n", s);

        int result = find_max(10, 5) + 10;
        printf("result: %d\n", result);

        float x = 5.0;
        x = triple(x);
        printf("x: %f\n", x);

        printf("%f\n", add(10.5, 5.9) );
        printf("%f\n", mult(10.5, 5.9) );
        printf("%f\n", power(2,3) );
        printf("%f\n", power(5.8,9) );
        printf("%f\n", power(10,2) );
        print_two(1.6, 2.4);

        int a[] = {2,4,9,1,3,6};

        printf("a: %p\n", a);
        

        add_one(a, 6);
        for (int i = 0; i < 6; i++) printf("a[%d]=%d\n", i, a[i]);
    return 0;
}

int find_max(int a, int b)
{
    if (a > b) return a;
    else return b;
}

float triple(float n)
{
    n = n * 3;
    return n;
}

double add(double x, double y)
{
    double result = x + y;
    return result;
}
double mult(double x, double y) { return x * y; }

double power(double x, int n)
{
    double result = x;
    for (int i = 1; i < n; i++)
    {
        result = mult(result, x);
    }
    return result;
}

void print_two(float a, float b)
{
    printf("%f\n%f\n", a, b);
}

void add_one(int array[], int length)
{
    printf("array: %p\n", array);
    for (int i = 0; i < length; i++) array[i] += 1;
}