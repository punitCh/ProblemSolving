#include <iostream>
#include <climits>

using namespace std;


void ReverseArray(int n[],int size){
    
   
    int start = 0;
    int end = size - 1;
        
    while(start <= end)
    {
        swap(n[start],n[end]);
        start++;
        end--;
        
    }
    
}
void printArray(int n[],int size)
{
    
  for(int i = 0 ; i < size ; i++)
  {
      cout << n[i] << " ";  
      
  }
    
}

int main()
{
    int n[10];
    int size;
    int element;
    cout<< " Enter the number of elements  " << endl;
    cin>>size;
    
    cout << " Enter the values : " << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cin >> n[i];
    }
    
    ReverseArray(n,size);
    printArray(n,size);
    
}
