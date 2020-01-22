#include<stdio.h>
void Prime(int);
void main()
{  int num;
    printf("Enter a No: ");
    scanf("%d",&num);
    Prime(num);
}

void Prime(int num)
{
    int i=2;
    printf("Prime factors of %d are: ",num);
    while(num>1)
    {
        while(num%i==0)
        {
            printf("%d ",i);
            num = num/i;
        }
        i++;
    }
}
