/* UPES 100 Days of Code - Day 97 - Question 147 */
#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    int id;
    float salary;
}
;
int main()
{
    struct Employee e;
    FILE*f;
    scanf("%49s%d%f", e.name, &e.id, &e.salary);
    f=fopen("employee.dat", "wb");
    fwrite(&e, sizeof(e), 1, f);
    fclose(f);
    f=fopen("employee.dat", "rb");
    fread(&e, sizeof(e), 1, f);
    fclose(f);
    printf("%s %d %.2f", e.name, e.id, e.salary);
    return 0;
}
