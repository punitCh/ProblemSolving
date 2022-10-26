
#include <iostream>
#include <climits>

using namespace std;

int getMax(int n[],int size){
    
    int maxi = INT_MIN;
    
    for(int i = 0 ; i < size ; i++ )
    {
      maxi = max( maxi , n[i]);
    }
    
    return maxi;
}

int getMin(int n[],int size){
    
    int mini = INT_MAX;
    
    for(int i = 0 ; i < size ; i++ )
    {
      mini = min( mini , n[i]);
    }
    
    return mini;
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
    
    int max = getMax(n,size);
    int min = getMin(n,size);
    
    cout<< " the max value in array is : " << max << endl;
    cout<< " the min value in array is : " << min << endl;
    
}
