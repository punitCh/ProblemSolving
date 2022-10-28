#include<iostream>

using namespace std;


int firstOcc(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid=start+(end-start)/2;
    int ans = -1;
    while(start <= end)
    {  
        
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1 ;
        }
        else if(key>arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }

    return ans;

}
int LastOcc(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid  = start + (end - start)/2;
    int ans = -1;
    while(start <= end)
    {  
        
        if(arr[mid] == key)
        {
            ans = mid ;
            start = mid + 1;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
         mid  = start + (end - start)/2;
    }

    return ans;

}

int main()
{
    int even[11] = {1,2,3,3,3,3,3,3,3,3,5};
    // int n;
    // cin>>n;

    cout << " First Occurance of 3 is at index " << firstOcc(even,11,3);
    cout << " Last Occurance of 3 is at  index " << LastOcc(even,11,3);
}