//Demonstrate use of union and find out size of union variable and the attributes from union.

#include<stdio.h>
union student{
int rn;
flaot fees;
};

int main()
{
union student s;
s.rn=1;
printf("roll no=%d",s.rn);

printf("size of rn=%d",sizeof(int));
printf("size of union =%d",sizeof(s));

return 0;
}

