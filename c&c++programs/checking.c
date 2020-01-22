#include<stdio.h>
int main()
{
	int a[5],count1 = 0,count2 = 0,count3 = 0,count4 = 0,i;
	printf("Enter the numbers\n");
	for( i = 0 ; i < 5 ;i++ )
	{
	scanf("%d",&a[i]);
	}
	for( i = 0;i < 5;i++ )
	{
	if(a[i] % 2 == 0)
	{
    printf("even = %d\n",a[i]);
    count1 = count1 + 1;
	}
	else
	{
	printf("odd = %d\n",a[i]);
	count2 = count2 + 1;
	}
	}
	printf("even count = %d\n", count1);
	printf("odd count = %d\n",count2);
	for( i = 0;i < 5 ; i++)
	{
		if( a[i] > 0)
		{
			printf("positive number = %d\n",a[i]);
			count3 = count3 + 1;
		}
		else
		{
			printf("negative number = %d\n",a[i]);
			count4 = count4 + 1;
		}
	}
	printf("positive count = %d\n",count3);
	printf("negative count = %d\n",count4);
	return 0;
}