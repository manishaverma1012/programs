#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int N,a[N],i;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    } 
    double sum=0.0;
    double mean,median;
    for(i=0;i<N;i++)
    {
        sum+=a[i];
    }
        mean = sum/N;
        cout << fixed << setprecision(1) << mean<<endl; 
    sort(a, a+N);
    if(N%2==0)
    {
        median = (a[(N-1)/2] + a[N/2])/2.0;
       cout<<fixed<<setprecision(1)<<median<<endl;
    }
    else{
        median= a[N/2];
        cout<<fixed<<setprecision(1)<<median<<endl;
    }
    int number = a[0];
    int mode = number;
    int count = 1;
int countMode = 1;

for ( i=1; i<N; i++)
{
      if (a[i] == number) 
      { // count occurrences of the current number
         ++count;
      }
      else
      { // now this is a different number
            if (count > countMode) 
            {
                  countMode = count; // mode is the biggest ocurrences
                  mode = number;
            }
           count = 1; // reset count for the new number
           number = a[i];
  }
}

cout << mode << endl;



    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
