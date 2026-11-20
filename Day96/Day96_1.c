/* UPES 100 Days of Code - Day 96 - Question 146 */
#include <stdio.h>
#include <string.h>

struct Date
{
    int d, m, y;
}
;
struct Employee
{
    char name[50];
    int id;
    struct Date join;
}
;
int main()
{
    struct Employee e;
    scanf("%49s%d%d%d%d", e.name, &e.id, &e.join.d, &e.join.m, &e.join.y);
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d", e.name, e.id, e.join.d, e.join.m, e.join.y);
    return 0;
}
