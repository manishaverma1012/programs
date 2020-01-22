#include<stdio.h>
void area( int *, int *,int *);
int main()
{
	int a , b, c;
	printf("enter the lengths of sides \n");
	scanf("%d%d%d",&a,&b,&c);
	area( &a,&b,&c);
	return 0;
}
void area( int *x, int *y, int *z)
{
	float s,p,q;
	s = (*x+*y+*z)/2.0;
	p = (s*(s-*x)*( s- *y)*( s - *z));
	q = sqrt( p );
	printf("%f\n",q);
}
