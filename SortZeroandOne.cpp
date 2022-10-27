#include <iostream>

using namespace std;

void SortZO(int arr[], int n)
{
    int i =0;
    int j =n-1;
    while( j>=i )
    {
        if(arr[i]==1 && arr[j] == 0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else
        {
            i++;
            j--;
        }
        
    }
    
}

void printArray(int arr[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<" "<< arr[i] << " ";
    }

    cout<<endl;
}

int main()
{
   int n;
   cin>>n;
   
   int arr[100];
   cout<<" Enter the elements in array ";
   for(int i =0 ; i < n ; i++)
   {
       cin>>arr[i];
   }
   
   SortZO(arr,n);
  printArray(arr,n);
   
}
