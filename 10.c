#include<stdio.h>
#include<conio.h>
struct Student
{
  int chem_marks,maths_marks,phy_marks;
  char name[20];
};
struct Student input();
void arrayinput(struct Student *,int);

int main()
{
        struct Student arr[5];
        printf("enter a 5 Student details only\n");
       arrayinput(arr,5);
            getch();
}

 struct Student input()
 {
      struct Student e;

      fflush(stdin);
      gets(e.name);
      scanf("%d",&e.chem_marks);
      scanf("%d",&e.maths_marks);
      scanf("%d",&e.phy_marks);
      return e;
 }
void arrayinput(struct Student *f,int x)
{
     int i,sum;
     float avg;
     printf("enter  Students name amd chemesty , math , physic marks\n");
     printf("each subject 100 marks\n");
     for(i=0;i<x;i++)
     {
          printf("\nStudent no %d....\n",i+1);
     *(f+i)=input();
     }
     for(i=0;i<x;i++)
     {
          sum=f[i].chem_marks+f[i].maths_marks+f[i].phy_marks;
          avg=(sum/3.0);
          printf("\n%s  percentage is -> %f",f[i].name,avg);
          sum=0;
          avg=0;
     }
}



