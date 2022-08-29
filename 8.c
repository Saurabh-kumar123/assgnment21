#include<stdio.h>
#include<conio.h>
struct Student
{
  int roll,clas;
  char name[20];
  float fee;
};
void display(struct Student);
struct Student input();
void arrayinput(struct Student *,int);
void arraydisplay(struct Student *,int);
int main()
{
        struct Student arr[10];
       arrayinput(arr,10);
       arraydisplay(arr,10);
     getch();
}
void display(struct Student e)
{
     printf("\nStudent name = %s\nRoll no = %d\nClass = %d\nFess = %f",e.name,e.roll,e.clas,e.fee);
}
 struct Student input()
 {
      struct Student e;
     printf("enter a student name , roll no , class  and  fees\n");
     fflush(stdin);
      gets(e.name);
      scanf("%d",&e.roll);
      scanf("%d",&e.clas);
      scanf("%f",&e.fee);
      return e;
 }
void arrayinput(struct Student *f,int x)
{
     int i;
     for(i=0;i<x;i++)
     *(f+i)=input();
}
void arraydisplay(struct Student *f,int x)
{
     int i;
     for(i=0;i<x;i++)
     {
     display(*(f+i));
     printf("\n");
     }

}

