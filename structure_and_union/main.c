#include <stdio.h>
#include <stdlib.h>
struct employee
{
    int ID;
    char name[20];
    int age;
};
 void main()
 {
  struct employee emp;
   printf("enter ID:");
   scanf("%d",&emp.ID);
   printf("enter name:");
   scanf("%s",&emp.name);
   printf("enter age:");
   scanf("%d",&emp.age);
   printf("employee ID:%d, name:%s, age:%d",emp.ID,emp.name,emp.age);

   printf("\nstruct size:%d",sizeof(emp));
   getch();
 }
