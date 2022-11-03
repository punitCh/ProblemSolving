#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    vector<int> ans;
    int i=n-1;
    int j=m-1;
    int sum=0;
    int carry=0;
    while(i>=0 && j>=0)
    {
        sum = a[i]+b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0)
    {
        sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
     while(j>=0)
    {
        sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
     }
     while(carry!=0)
    {
        sum = carry;
        
        sum = sum%10;
        ans.push_back(sum);
        carry--;
     }
    reverse(ans.begin(),ans.end());
    return ans;
}
