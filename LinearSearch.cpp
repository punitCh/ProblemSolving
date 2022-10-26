#include <iostream>
#include <climits>

using namespace std;


bool Search(int n[],int size,int ele){
    
   
    int start;
    int end;
    for(int i = 0 ; i < size ; i++ )
    {  
      if(n[i] == ele)
      {
          return 1;
      }
    }
    
    return 0;
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
    
    cout<< " Enter the element you want to search  " << endl;
    cin >> element;
    
    int answer = Search(n,size,element);
  if( answer == 1)
   { cout<<" element is present " <<endl;}
   else
   { cout << " element is not present " << endl;}
    
}
