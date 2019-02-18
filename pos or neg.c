#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the value");
scanf("%d",&n);
if(n>0)
{
printf("pos");
}
else if(n==0)
{
printf("zero");
}
else
{
printf("neg");
}
getch();
}
