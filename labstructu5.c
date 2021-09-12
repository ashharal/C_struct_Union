/*
WAP to copy one structure into another. Use concept of nested structures.
a. Create Employee structure having attributes as id, name and basic salary.
b. Create Date structure having attributes as dd,mm,yy.
c. Nest Date structure into Employee as to display joining date of employee.

*/
#include <stdio.h>

struct Employee{
    int id;
    char name[10];
    double salary;
    
    struct Date {
    int day,;
    int month;
    int year;
    struct employee 
    
    }D;

}E;


int main() {
     int i;
    struct Employee E[5], Date D[5];
 
    
    for (i=0;i<5;i++)
    {
    printf("\nEnter id,name and salary and date");
    scanf("%d%s%lf%d", &E[i].id, &E[i].name, &E[i].salary);
   }
printf("\n\tid\tname\tsalary\t\n");
for(i=0;i<5;i++)
{
printf("\t%d\t%s\t%lf\t\n",E[i].id, E[i].name, E[i].salary);
}
return 0;

}
