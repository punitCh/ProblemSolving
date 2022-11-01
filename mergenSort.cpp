// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int merge(int arr1[],int n,int arr2[], int m,int arr3,int o)
{
    int i=0,j=0,k=0;
    
    while(i < n && j < m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n)
    {
         arr3[k++] = arr1[i++];
    }
    while(j<m)
    {
        arr3[k++] = arr2[j++];
    }
    
}
int main() {
    // Write C++ code here
    int arr1[4] = {1,3,5,7};
    int arr2[5] = {2,4,6,8,10};
    int arr3;
    
    merge(arr1,4,arr2,5,arr3,9);
    print(arr3);

    return 0;
}
