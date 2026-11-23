/* UPES 100 Days of Code - Day 99 - Question 149 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
}
;
int main()
{
    struct Student*s=malloc(sizeof(struct Student));
    if (!s)return 1;
    scanf("%49s%d%f", s->name, &s->roll, &s->marks);
    printf("Name: %s | Roll: %d | Marks: %.2f", s->name, s->roll, s->marks);
    free(s);
    return 0;
}
