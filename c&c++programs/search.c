#include<stdio.h>
int main()
{
	int a[25],i,k,loc,count = 0;
	printf("enter the elements of an array\n");
	for( i = 0; i< 25; i++)
	{
	scanf("%d",&a[i]);
	}
	printf("enter the searching element\n");
	scanf("%d",&k);
	for(i =0 ; i<25; i++)
	{
	if( a[i] == k)
	{
	loc = i;
	printf("location = %d\n",loc);
	printf("element = %d\n",k);
	
	count = count + 1;
    }
   }
   printf("%d\n",count);

	return 0;
}