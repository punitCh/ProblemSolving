#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n)
    {   int space=n-i;
        int j=1;
        int start=1;
        while(space)//phele space wala triangle print kiya(1st triangle)
        {
           cout<<" ";
           space--;
        }
        while(j<=i)//fir 2nd triangle print kiya
        {
            cout<<start;
            start++;
            
            j++;
        }
        int index=i-1;
        while(index)//fir 3rd triangle print kiya
        {
            cout<<index;
            index--;
        }
        cout<<endl;
        i++;
       
        
    }
}
