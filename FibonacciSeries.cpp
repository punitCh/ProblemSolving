#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
   int a=0;
   int b=1;
   int next;
   cout<<a<<" "<<b<<" ";
   for(int i=0;i<=n;i++)
   {
       next = a+b; 
       
       cout<<next<<" ";
       
       a=b;
       
       b=next;
   }
    
}
