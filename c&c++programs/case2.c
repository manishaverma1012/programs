#include<stdio.h>
int main()
{
	int c,a,b,d;
	printf("enter the choice");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
	printf(" enter the number of subject");
	scanf("%d",&a);
	if(a > 3)
	{
	printf("he doesnt get any grace");
	}else
	{
	printf(" grace marks are 5");
	}
	break;
	case 2:
	printf("enter the number of subject");
	scanf("%d",&b);
	if( b > 2)
	{
	printf("he failed he doesnt get any grace");
	}
	else
	{
	printf("grace marks are 4");
	}
	break;
	case 3:
	printf("enter the number of subject");
	scanf("%d",&d);
	if(d > 1)
	{
	printf("he failed he doesnt get any grace ");
	}else
	{
     printf("grace marks are 5");	
	}
	break;
    }
    return 0;
}