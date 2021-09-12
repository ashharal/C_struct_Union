//Create a structure Employee. Accept data for 5 employees and display it.
#include <stdio.h>

struct Employee{
    int id;
    char name[10];
    double salary;
};
int main() {
     int i;
    struct Employee E[5];
    
    for (i=0;i<5;i++)
    {
    printf("\nEnter id,name and salary");
    scanf("%d%s%lf", &E[i].id, &E[i].name, &E[i].salary);
   }
printf("\n\tid\tname\tsalary\t\n");
for(i=0;i<5;i++)
{
printf("\t%d\t%s\t%lf\t\n",E[i].id, E[i].name, E[i].salary);
return 0;
}
}
