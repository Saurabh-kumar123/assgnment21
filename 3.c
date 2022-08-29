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
     printf("enter a Employ id , Employ name and Employ salary\n");
     scanf("%d",&e.id);
     fflush(stdin);
      gets(e.name);
      scanf("%f",&e.salary);
       display(e);
     getch();
}
void display(struct Employ e)
{
     printf("Employ id - %d\nEmploy Name - %s\nEmploy salary - %f",e.id,e.name,e.salary);
}
