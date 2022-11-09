// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

    bool allzero(int arr[])
    {
        for(int k=0; k < 26 ; k++)
        {
            if(arr[k]!=0) 
            {return false;}
        }
        return true;
    }   

  bool checkInclusion(string s1, string s2) {
        int arr[25]={0};
        for(int i=0; i<s1.length() ;i++)
        {
            int num = s1[i]-'a';
            arr[num]++;
        }
         for(int j=0; j<s2.length() ;j++)
        {
           arr[s2[j]-'a']--;
             if(j-s1.length()>=0)
             {
                 arr[s2[j-s1.length()]-'a']++;
             }
             if(allzero(arr)) return true;
        }
        return false;
    }
int main() {
    string s1 = "cab";
    string s2 = "eidbcaoo";
  

  if(checkInclusion(s1,s2) == true) cout<<"completed";
    else
    cout<<"not done";
}
