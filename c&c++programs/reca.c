#include<stdio.h>
#include<stdlib.h>
int sum(int);
int main()
{
	int n ,c;
	printf("enter the number\n");
	scanf("%d",&n);
	c = sum (n);
	printf("%d\n",c);
}
int sum( int i)
{
int i1 , i2, result;
if( i % 10 == 0)
{
	return i;
}
else
{
i1 = i%10;
i2 = i/10;
result = i1 + sum(i2);
return result;	
}
}