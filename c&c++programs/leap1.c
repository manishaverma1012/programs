#include<stdio.h>
int leap( int);
int main()
{
int n;
printf("enter  the year \n");
scanf("%d",&n);
leap(n);
return 0;
}
int leap( int a)
{
if(a % 100 == 0)
{
if(a % 400 == 0)
{
printf("a is leap year ");
}
}
else if (a % 4 == 0)
{
printf(" this year is a leap year");
}
else
{
printf("year is not a leap year");
}
}