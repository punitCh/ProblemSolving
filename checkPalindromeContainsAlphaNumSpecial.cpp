#include <bits/stdc++.h> 
char toLowerCase(char ch)
{
    if(ch>='a' && ch<='z'||ch>='0' && ch<='9')
    {
        return ch;
    }
    else
    {
        char temp = ch -'A'+'a';
        return temp;
    }
}
bool isNotSpecial(char s)
{
    if(s >= 'a' && s<='z' || s >='0' && s<='1')
    {
        return 1;
    }
    return 0;
}
bool checkPalindrome(string s)
{
    // Write your code here.
//     bool status = false;
    int st = 0;
    int e = s.size()-1;
    
    while(st<=e)
    {
        if(isNotSpecial(toLowerCase(s[st])) && isNotSpecial(toLowerCase(s[e])))
        {
            if(toLowerCase(s[st])!=toLowerCase(s[e]))
            {
                return 0;
            }
            else{
                st++;
                e--;
            }
        }
        else
        {
            if(!isNotSpecial(toLowerCase(s[st])))
            {
                st++;
            }
            else
            {
                e--;
            }
        }
    }
    return 1;
}
