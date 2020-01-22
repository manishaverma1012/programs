#include<stdio.h>
void swap( int ,int);
int main()
{
	int i,j,a[5];
	for(i = 0 ; i <= 4;i++)
	{
	printf("enter the  number which you want to sort");
	scanf("%d",&a[5]);
	}
	for( i= 0 ; i  <= 4; i++)
	{
	for( j = 0;j <= 4; j++)
	{
	if(a[j] > a[j+1])
	{
	swap(a[j],a[j+1]);
	}
	}
	}
	for(i = 0; i<= 4; i++)
	{
	printf("%d",a[i]);
	}
	voidN swap(int x, int y)
	{
	int t;
	t = x;
	x = y;
	y = t;
	}
	return 0;


}