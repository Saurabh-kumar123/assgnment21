#include<stdio.h>
#include<conio.h>
struct time
{
     int sec,min,hor;
};
void diff(struct time start_time,struct time end_time,struct time *diff_time)
{
     if(start_time.hor<end_time.hor)
     {
     while(start_time.sec > end_time.sec)
     {
          --end_time.min;
          end_time.sec += 60;
     }
          diff_time -> sec = end_time.sec - start_time.sec;
     while(start_time.min > end_time.min)
     {
          --end_time.hor;
          end_time.min += 60;
     }
          diff_time -> min = end_time.min - start_time.min;
          diff_time -> hor = end_time.hor - start_time.hor;
     }
     else
     {
       while(start_time.sec < end_time.sec)
     {
          --start_time.min;
          start_time.sec += 60;
     }
          diff_time -> sec = start_time.sec - end_time.sec;
     while(start_time.min < end_time.min)
     {
          --start_time.hor;
          start_time.min += 60;
     }
          diff_time -> min = start_time.min - end_time.min;
          diff_time -> hor = start_time.hor - end_time.hor;
     }
}

int main()
{
     struct time start_time,end_time,diff_time;
     printf("enter a start time -  ");
     scanf("%d:%d:%d",&start_time.hor,&start_time.min,&start_time.sec);
          printf("\nenter a end time -  ");
     scanf("%d:%d:%d",&end_time.hor,&end_time.min,&end_time.sec);
          diff(start_time,end_time,&diff_time);
     printf("\ndiffrence time between -  ");
     printf("%d : %d : %d ",diff_time.hor,diff_time.min,diff_time.sec);
    getch();
}
