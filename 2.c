#include<stdio.h>
#include<conio.h>
struct Employ
{
  int id;
  char name[20];
  float salary;
};
int main()
{
     struct Employ e;
     printf("enter a Employ id , Employ name , Employ salary\n");
     scanf("%d",&e.id);
     fflush(stdin);
      gets(e.name);
      scanf("%f",&e.salary);
     printf("%d  %s  %f",e.id,e.name,e.salary);
     getch();
}

