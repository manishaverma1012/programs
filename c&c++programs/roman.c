#include<stdio.h>
int roman( int );
int main()
{
	int a , z;
	printf("Enter the year\n");
	scanf("%d",&a);
	z = roman( a);
	return 0;
}
int roman( int k )
{
	if( k >= 1000)
	printf("%c",M);
	return( k = k-1000);
	if( k >= 500)
	printf( "%c",D);
	return ( k = k - 500);
	if( k >= 100)
	printf("%c",C);
	return( k = k- 100);
	if( k>= 50)
	printf("%c",L);
	return ( k = k -50);
	if( k >= 10)
	printf("%c",X);
	return ( k = k - 10);
	if( k >= 5)
	printf("%c", V)
	return ( k = k - 5);
	if( k >= 1)
	printf("%c",I);
	return ( k );
}