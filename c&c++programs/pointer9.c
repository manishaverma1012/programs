#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float distance( float * , float *, float * , float *);
float area( float *,float *,float *,float *,float *,float *);
int main()
{
	float x1,y1,x2,y2,x3,y3;
	printf("Enter the vertices of the triangle\n");
	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
	distance(&x1,&y1,&x2,&y2);
	distance(&x2,&y2,&x3,&y3);
	distance(&x3,&y3,&x1,&y1);
	area(&x1,&y1,&x2,&y2,&x3,&y3);
	return 0;
}
float distance( float *a,float *b, float *c,float *d)
{
	float z = sqrt((*c - *a)*(*c - *a) + (*d - *b)*(*d - *b));
	float m = abs(z);
	printf("%f\n",m);
}
float area( float *p,float *q,float *r,float *s,float *t,float *u)
{
	float w = (*p*( *q - *u)+ *r * ( *u - *q)+ *t*(*q - *s))/2.0 ;
	float n = abs( w);
	printf("%f\n",n);
}
