#include<stdio.h> 
int pow(int , int );
int main()
{
	int a, b;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	pow(a ,b);
	return 0;
}
    int pow(int x ,int y) 
    {
    	int w = 1;
        if( y == 0)
        {
            printf("%d",1);
        }else
        {
            for(y ; y > 0 ;y--)
            {
                w = w*x ;
            }
            printf("%d",w);
        }
    }