#include<stdio.h>
float distance( int * , int *, int * , int * );
float area( int *,int *,int *,int *,int *,int *);
int main()
{
	float x1,y1,x2,y2,x3,y3,x,y;
	printf("Enter the vertices of the triangle\n");
	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
	distance(&x1,&y1,&x2,&y2);
	distance(&x2,&y2,&x3,&y3);
	distance(&x3,&y3.&x1,&y1);
	area(&x1,&y1,&x2,&y2,&x3,&y3);
	inside(&x,&y);
	return 0;
}
float distance( float *a,float *b, float *c,float *d)
{
	float z = (*c - *d)/(*a - *b);
	float m = abs(z);
	printf("%f\n",m);
}
float area( float *p,float *q,float *r,float *s,float *t,float *u)
{
	float w = (*p*( *q - *u)+ *r * ( *u - *q)+ *t(*q - *s))/2.0 ;
	float n = abs( w);
	printf("%f\n",n);
}
float inside( float *a2,float *a1)
{
	  float A = area(&x1 , &y1 ,&x2 ,&y2, &x3, &y3);
	  float A1 = area ( &x ,&y, &x2 ,&y2 , &x3 ,&y3);
      float A2 = area (&x1 , &y1,&x ,&y,&x3 ,&y3);
      float A3 = area ( &x1 , &y1 , &x2 , &y2, &x , &y);
      if ( A == A1 + A2 +A3)
      {
        return 1;
      }
      else
      {
        return 0;
      }
  }