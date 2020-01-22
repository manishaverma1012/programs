#include<stdio.h>
#include<stdlib.h>
int primef(int );
int main()
{
	int num ,c;
	printf("enter the number\n");
	scanf("%d",&num);
	c = primef(num);
	printf("%d\n",c);
	return 0;

}
int primef( int a)
{
	int i = 2;
	if( a == 1)
	{
	exit(0);
	}
	while(a > 1)
	{
	if( a % i == 0)
	{
	printf("%d\n",i);
	a = a/i;
	int result = primef(a);
	return result;
	}
	i++ ;
	}
}