#include<stdio.h>
#include<conio.h>
struct Employ
{
  int id;
  char name[20];
  float salary;
};
void display(struct Employ);
struct Employ input();
void arrayinput(struct Employ *,int);
//void arraydisplay(struct Employ *,int);
int main()
{
        struct Employ arr[3];
        printf("enter a 3 employs details\n");
       arrayinput(arr,3);
       //arraydisplay(arr,3);
     getch();
}
void display(struct Employ e)
{
     printf("\n%d  %s  %f",e.id,e.name,e.salary);
}
 struct Employ input()
 {
      struct Employ e;
     printf("enter a Employ id , Employ name and Employ salary\n");
     scanf("%d",&e.id);
     fflush(stdin);
      gets(e.name);
      scanf("%f",&e.salary);
      return e;
 }
void arrayinput(struct Employ *f,int x)
{
     int i;
     struct Employ max;
     for(i=0;i<x;i++)
     *(f+i)=input();
     max=f[0];
     for(i=0;i<x;i++)
          if(f[i].salary>max.salary)
          max=f[i];
          display(max);
}
/*void arraydisplay(struct Employ *f,int x)
{
     int i;
     for(i=0;i<x;i++)
     display(*(f+i));

}*/
