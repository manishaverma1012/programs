#include<stdio.h>
void swap( int *, int *, int *);
int main()
{
	int a, b, c;
	printf("Enter the numbers\n");
	scanf("%d%d%d",&a ,&b ,&c);
	swap ( &a ,&b ,&c);
	printf("%d %d %d\n",a,b,c);
	return 0;
}
void swap( int *x ,int *y , int *z)
{
	int t ;
	t = *x;
	*x = *z;
	*z = *y;
	*y = t;
}