
#include<stdio.h>
unsigned int Num;
void Prime_Fact(unsigned int);
void main()
{

    printf("Program to find Prime factors of given number\n");
    printf("Enter a No: ");
    scanf("%d",&Num);
    Prime_Fact(Num);
}

void Prime_Fact(unsigned int N)
{
    unsigned int i=2;
    printf("Prime factors of %d are: ",N);
    while(N>1)
    {
        while(N%i==0)  // If remainder equals to 0
        {
            printf("%d ",i); // print the factor
            N=N/i;              // divide number by factor
        }
        i++;  // else increment the factor
    }
}
