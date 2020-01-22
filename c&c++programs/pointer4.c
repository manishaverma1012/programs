#include<stdio.h>
void check(int*);
int main()
{
	int k = 35 , *z;
	z = check( &k);
	printf("%d\n",z);
	return 0;
}
void check( int *m)
{
		return(*m+2);
}