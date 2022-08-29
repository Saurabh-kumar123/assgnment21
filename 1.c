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
     struct Employ e={1,"saurabh kumar",56000.4};
     printf("%d  %s  %f",e.id,e.name,e.salary);
     getch();
}
