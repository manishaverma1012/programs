#include<stdio.h>
int result( int *, int *, int *);
int main()
{
	int a , b , c;
	printf(" enter the value of numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	result(&a ,&b,&c);
	return 0;
}
int result( int *x, int *y, int *z)
{
  float average , per;
  average = (*x + *y +  *z) / 3;
  printf("%f\n",average);
  per =((*x + *y + *z) * 100)/300;
  printf("%f\n",per);

}