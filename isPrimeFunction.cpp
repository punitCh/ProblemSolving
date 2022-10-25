#include <iostream>

using namespace std;
//1 is for prime no
//0 is for not a prime no
bool isPrime(int num)
{ 
    for(int i=2;i<num;i++)
    {  //agar divide hoker remainder 0 aa rha to not a prime no.
        if( num%i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    int n;
    cin>>n;
    
    if(isPrime(n))
    { 
        cout<<" number is prime ";
    }
    else
    cout<< " number is not prime ";
}
