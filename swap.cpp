#include<stdio.h>
int swap (int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;	
}
 int main()
{
int x,y;
printf("before swapping the numbers");
scanf("%d %d",&x,&y);
swap(x,y);
printf("after swapping  the numbers:\n x=%d y=%d",x,y);
return 0;
}
