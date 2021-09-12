//6 Create a structure Employee. Pass it to a function by value.
#include <stdio.h>

struct Employee{
    int id;
    char name[10];
    double salary;
    
    };
    void display(struct Employee E);
    int main()
    {
    struct Employee E;
    printf("enter the employee id , name , salary");
    scanf("%d %s %lf", &E.id,E.name, E.salary);
    
    display(E);
    return 0;
    }
    
    void display(struct Employee E)
    {
    printf("\n Employee Id = %d",E.id);
    printf("\n Employee name =%s",E.name);
    printf("\n Employee salary =%.2lf",E.salary);
    }
    
