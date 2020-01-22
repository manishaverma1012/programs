#include<stdio.h>
int fib(int );
int main()
{
	int n,c;
	for( n = 1 ; n <= 25 ; n++)
	{
	c = fib(n);
	printf("%d\n", c);
    }
	return 0;
}
int fib(int i)
{
	if( i == 1) 
	{
	 return 1;
	}
	else if( i== 0)
	{
		return 0;
	}
	else
	{
	return fib( i -1) + fib(i - 2);
	}
}
