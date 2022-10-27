#include <iostream>

using namespace std;

int BinarySearch( int arr[],int n, int v )
{
  int start = 0;
  int end = n - 1;
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
int main()
{   int number1;
    int number2;
    int even[8] = {3,4,8,9,10,45,56,67};
    int odd[7] = {7,8,11,12,40,55,66};
    cout << " Enter the number you want to search in the even array : " << endl;
    cin >> number1 ;
    int anse = BinarySearch(even,8,number1);
    cout << " Enter the number you want to search in the odd array : " << endl;
    cin >> number2 ;
    int anso = BinarySearch(odd,7,number2);

    cout << " no in the even array is  on the index " << anse << endl;
    cout << " no in the odd array is  on the index " << anso << endl;
}