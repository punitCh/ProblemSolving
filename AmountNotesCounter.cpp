#include <iostream>

using namespace std;

int main()
{   int inp1;
    cin>>inp1;
    int count;
    
   int hundred,fifty,twenty,ten;
   switch(1)
   {
       case 1 : hundred  = inp1/100;
                cout<< " hundred "<< hundred <<endl;
                inp1 = inp1 - hundred*100;
       case 2 : fifty  = inp1/50;
                cout<< " Fifty "<< fifty <<endl;
                inp1 = inp1 - fifty*50;
       case 3 : twenty  = inp1/20;
                cout<< " Twenty "<< twenty <<endl;
                inp1 = inp1 - twenty*20;
       case 4 : ten  = inp1/10;
                cout<< " Ten "<< ten <<endl;
                inp1 = inp1 - ten*10;        
   }
   return 0;
}
