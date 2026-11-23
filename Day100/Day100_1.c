/* UPES 100 Days of Code - Day 100 - Question 150 */
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
    struct Student s, *p=&s;
    scanf("%49s%d%f", p->name, &p->roll, &p->marks);
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.2f", p->name, p->roll, p->marks);
    return 0;
}
