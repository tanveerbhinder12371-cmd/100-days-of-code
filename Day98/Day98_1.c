/* UPES 100 Days of Code - Day 98 - Question 148 */
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
}
;
int main()
{
    struct Student a, b;
    scanf("%49s%d%f", a.name, &a.roll, &a.marks);
    scanf("%49s%d%f", b.name, &b.roll, &b.marks);
    if (strcmp(a.name, b.name)==0&&a.roll==b.roll&&a.marks==b.marks)printf("Same");
    else printf("Different");
    return 0;
}
