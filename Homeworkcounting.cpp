#include <iostream>

using namespace std;

int main()
{
    int n;
   cin>>n;
   
    int row=1;
    while(row<=n)
    {  
        int col=1;
        int val=row;
        while(col<=row)
        {  
            
            cout<<row+col-1<<"";
            
            col++;
           
        }
        cout<<endl;
        row++;
    }

    
}
