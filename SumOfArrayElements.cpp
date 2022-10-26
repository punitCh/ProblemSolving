#include <iostream>
#include <climits>

using namespace std;


int Sum(int n[],int size){
    
    int sum = 0;
    int start;
    int end;
    for(int i = 0 ; i < size ; i++ )
    {  
     sum = sum + n[i];
    }
    
    return sum;
}

int main()
{
    int n[10];
    int size;
    cout<< " Enter the number of elements  " << endl;
    cin>>size;
    
    cout << " Enter the values : " << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cin >> n[i];
    }
    
    int answer = Sum(n,size);
    
    cout << answer ;
    
}
