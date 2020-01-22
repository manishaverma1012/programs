#include<stdio.h> 
int fact(int );
int main()
{
	int n i,;
	printf("enter the value of n\n");
	scanf("%d",&n);
	fact(n);
	return 0;
}
    int fact( x)
    {
    	int i = 1, factorial = 1 ;
    	while( i<= x)
    	{
    		factorial = factorial * i ;
    		i++;
    	}
    	return (factorial);

    }