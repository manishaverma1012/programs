#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int x,int y,int z,int p);

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    
    return 0;
}
int max_of_four(int a, int b,int c,int d)
{
    int max;
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("%d",a);
            }
            else
            {
                printf("%d",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("%d",c);
            }
            else
            {
                printf("%d",d);
            }
        }
    }
    else if(b>c)
    {
        if(b>d)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",d);
        }
    }
    else if(c>d)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",d);
    }
return max ;
}

