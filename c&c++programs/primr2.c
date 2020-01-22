#include<stdio.h>
void pf( int );
int main()
{
	int k;
	printf("enter the value of k");
	scanf("%d",&k);
	pf( k);
	return 0;
}
void pf(int a)
{
	int i=2;
    while(a > 1)
    {
        while(a%i==0)
        {
            printf("%d ",i);
            a= a/i;
        }
        i++;
    }
    printf("Prime factors of %d are: ",a);
}