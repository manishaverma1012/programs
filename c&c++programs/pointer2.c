#include<stdio.h>
void pass( int ,int);
int main()
{
	int i = 135, a= 135,k;
	k = pass( i , a);
	printf("%d\n" , k);
	return 0;
}
void pass( int j , int b)
{
    int c;
	int c = j + b ;
	return(c);
}