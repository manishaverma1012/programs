#include<stdio.h>
int main()
{
	int c ,a,d,n,fact = 1 ,i;
	printf("enter the choice\n");
	scanf("%d",&c);
	switch (c)
	{
	case 1:
	printf("enter the number \n ");
	scanf("%d",&a);
	for(i = 1; i<= a; i++)
	{
     fact = fact*i;
	}
	printf("%d\n",fact);
	break;
	case 2:
    printf("enter the number \n ");
    scanf("%d",&d);
    if( d % 2 == 0)
    {
    	printf("even\n");
    } else
    {
    	printf("odd\n");
    }
    break;
    case 3:
    printf("enter the number \n ");
    scanf("%d",&n);
    i = 2;
    while( i <= n -1)
    {
    	if(n%i == 0)
    	{
    		printf(" not a prime\n ");
    		break;

    	}
    	i++;
    }
    if(i == n)
    	printf("prime number \n");
	break;
	case 4:
	printf(" exit\n");
	break;
}

	return 0;
}