#include <iostream>
#include <climits>

using namespace std;


void SwapAlternateArray(int n[],int size){
    
   
    int start = 0;
    int end =  1;
        
  while(start < size)
  {
       if(start == (size-1))
       {
           break;
       }
       
       swap(n[start],n[end]);
       start += 2;
       end += 2;
       
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
    
    SwapAlternateArray(n,size);
    printArray(n,size);
    
}
