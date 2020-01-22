#include<stdio.h>
#include<math.h>
void fun( int *, int *, int *, int *,int *);
int main()
{
int  a,b,c,d,e;
printf(" Enter the value of numbers\n");
scanf("%d%d%d%d%d",&a, &b, &c, &d ,&e );
fun( &a,&b,&c,&d,&e);
return 0;
}
void fun( int *x, int *y, int *z, int *w,int *p)
{
	float sum , av ,std ,  q;
	sum = *x+*y+*z+*w+*p;
	av =  sum / 5.0;
	q = (( av - *x)*( av - *x)+ ( av - *y)*( av - *y)+(av - *z)* ( av - *z)+ ( av - *w)*( av - *w)+ ( av - *p)*( av - *p));
	std = sqrt( q);
	printf(" %f %f %f\n",sum , av, std);
}
