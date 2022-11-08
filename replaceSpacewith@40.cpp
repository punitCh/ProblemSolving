#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
    string s="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            s.push_back('@');
            s.push_back('4');
            s.push_back('0');
        }
        else
        {
            s.push_back(str[i]);
        }
    }
    return s;
}
