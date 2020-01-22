#include<stdio.h>
#include<stdlib.h>
int bin( int );
int main()
{
	int n ,c;
	printf("enter the decimal number\n");
	scanf("%d",&n);
	c = bin( n);
	printf("%d",c); 
}
int bin( int i)
{
if ( i  == 0)
{
return 0;
}
else 
{
return i % 2 + 10 * bin ( i / 2 );
}
}
