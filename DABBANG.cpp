#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n)
    {   
       int j=1;
       while(j<=n-i+1)
       {
           cout<<j;
           j++;
       }
       int k=1;
       while(k<=i-1)//fir 2nd triangle print kiya
        {
            cout<<"*";
            
            k++;
        }
        int index=i-1;
        while(index>=1)//fir 3rd triangle print kiya
        {
            cout<<"*";
            index--;
        }
        int st=n-i+1;
        int l=1;
        while(l<=n-i+1)//4th triangle print kiya
        {
            cout<<st;
            st--;
            l++;
            
        }
       cout<<endl;
       i++;
        
    }
}
