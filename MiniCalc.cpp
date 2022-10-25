#include <iostream>

using namespace std;

int main()
{   int inp1;
    cin>>inp1;
    
    int inp2;
    cin>>inp2;
     
    int num;
    cout<<"Enter operation 1. Multiplication 2.Addition 3.Subtraction 4.Division "<< endl;
    cin>>num;
       
       switch(num)
       {
           case 1 : cout<< " Multiplication" <<endl;
                    cout<<inp1 * inp2;
                    break;
                    
           case 2 : cout<< " Addition " << endl;
                    cout<<inp1 + inp2;
                    break;
                    
           case 3 : cout<< " Subtraction " << endl;
                    cout<<inp1 - inp2;
                    break;
                    
           case 4 : cout<< " Division " << endl;
                    cout<<inp1 / inp2;
                    break;
       }
   
}
