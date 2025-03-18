#include<stdio.h>
#include<stdlib.h>
#include <string.h> // for string copy

typedef int inches; // create type
struct Point
{
    int x;
    int y;
};

typedef struct
{
    int x;
    int y;
} Point2;

typedef struct
{
    char first_name[50];
    char last_name[50];
    int age;
} Student;

typedef struct
{
    int data;
    int *array;
} Info;


// struct pass value to function
// struct can access to dynamic allocate memmory
void print_student(Student s);
void age_student(Student *s);

int main(void)
{
    inches person1 = 181;
    inches person2 = 179;

    struct Point p1;
    p1.x = 5;
    p1.y = 3;
    
    struct Point p2;
    p2.x = 10;
    p2.y = 4;

    struct Point p3 = {1, 2};
    struct Point p4 =
        {.y = 7,
         .x = 6
        };

    Point2 p5 = {.x = 5, .y = 7};

    Student s1;
    s1.age = 20;   
    Student *s2;
    s2 = calloc(1, sizeof(Student));
    s2->age = 20; // arrows :memmory of s2 have age

    strcpy(s1.first_name, "Devon");
    strcpy(s1.last_name, "Smith");

    printf("person1: %d\n", person1);
    printf("person2: %d\n", person2);

    printf("(%d, %d)\n", p1.x, p1.y);
    printf("(%d, %d)\n", p2.x, p2.y);
    printf("(%d, %d)\n", p3.x, p3.y);
    printf("(%d, %d)\n", p4.x, p4.y);
    
    printf("(%d, %d)\n", p5.x, p5.y);

    print_student(s1);
    printf("\n%s %s\n", s1.first_name,
                        s1.last_name);
    printf("\nAge: %d\n", s1.age);
    printf("\nAge: %d\n", s2->age);
    
    age_student(s2);
    printf("\nAge: %d\n", s2->age);
    
    Info a;
    a.data = 7;
    a.array = malloc(sizeof(int) * 5);  // store heap on a
    for (int i = 0; i < 5; i++)
        a.array[i] = i + 1;
    Info b = a;   // a copy to b
    
    printf("b.data: %d\n", b.data);
    for (int i = 0; i < 5; i++)
        // print value of a because b references a's memmory
        printf("b.array[%d] = %d\n", i, b.array[i]);
    
    printf("a.array: %p\n", a.array);
    printf("b.array: %p\n", b.array);
    
    b.array[0] = 10;
    for (int i = 0; i < 5; i++)
        printf("a.array[%d] = %d\n", i, a.array[i]);

    free(a.array);

    return 0;
}

void print_student(Student s)
{
    printf("%s %s\n", s.first_name,
                      s.last_name);
    printf("Age: %d\n", s.age);
    s.age = 25;
    s.first_name[0] = 'K';
}

void age_student(Student *s)
{
    s->age += 1;
}