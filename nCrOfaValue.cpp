#include <iostream>

using namespace std;
int factorial(int num1 )
{  int fact = 1;
    for(int i=1; i<=num1; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int num1, int num2)
{
    int numerator = factorial( num1 );
    int denominator = factorial( num2) * factorial( num1 - num2);
    int nCrValue= numerator/denominator;
    
    return nCrValue;
}

int main()
{
    int n,r;
    cin>>n>>r;
    int answer = nCr(n , r);
    cout<<" Answer " << answer ;
}
