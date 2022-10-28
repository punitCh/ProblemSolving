#include <bits/stdc++.h> 

int BinarySearch( vector<int>& arr,int s, int e, int v )
{
  int start = s;
  int end = e;
  int mid = 0;

  while(start <= end)
  {
        mid = start + (end - start)/2;
        if(arr[mid] == v)
        {
            return mid;
        }
        if(arr[mid] < v)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }     
  }
  return -1;
}
int getPivotIndex(vector<int>& arr,int size)
{
   int start = 0 ;
   int end = size - 1;
   int mid = start + (end - start)/2;
   while(start < end)
   {
        if(arr[mid]>=arr[0])
         {
            start = mid+1;
         } 
         else{
            end = mid;
         }
        mid = start + (end - start)/2;
   }
    return start;
}

int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = getPivotIndex(arr,n);
    if(k >= arr[pivot] && k<= arr[n-1])
    {
        return BinarySearch(arr,pivot,n-1,k);
    }
    else
        return BinarySearch(arr,0,pivot,k);
}
