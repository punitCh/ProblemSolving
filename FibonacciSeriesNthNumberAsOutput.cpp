#include <iostream>

using namespace std;

int fab(int a)
{
   
    
   int n=0;
   int b=1;
   int next;
   if( a == 1 )
   { return 0;}
   if( a == 2 )
   { return 1; }
   
  
     for(int i=3;i<=a;i++)
     {
       next = n+b; 
       
       n=b;
       
       b=next;
     }
   
    return next;
}

int main()
{
    int n;
    cin>>n;
    
    int ans = fab(n);
    
    cout<< ans;
}
