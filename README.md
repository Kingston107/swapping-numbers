#include<conio.h>
#include<stdio.h>
void main()
{
int x,y;
clrscr();
printf("Enter the two numbers \n");
scanf("%d%d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
printf(" The two numbers after swaping are x=%d y=%d ",x,y);
getch();
}


