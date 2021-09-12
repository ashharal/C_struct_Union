//WAP to demonstrate typedef keyword.
#include<stdio.h>
#define n 3
typedef struct student
            {
                char name[20];
                int rollno;
                float marks;
               };
int main( )
{
        int i;
        struct student s[n];
        printf("Enter name, roll no. and marks Below :: \n");

        for(i=0; i<n; i++)
        {
                printf("\nEnter %d record : \n",i+1);

                printf("Enter Name :");
                scanf("%s",s[i].name);
                printf("Enter RollNo. :");
                scanf("%d",&s[i].rollno);
                printf("Enter Marks : ");
                scanf("%f",&s[i].marks);
 }
        printf("\n\tName\tRollNo\tMarks\t\n");
        for(i=0; i<n; i++)
                printf("\t%s\t%d\t%.2f\t\n", s[i].name, s[i].rollno, s[i].marks);

                return 0;
}

