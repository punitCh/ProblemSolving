class Solution {
public:
    bool isPowerOfTwo(int n)
    {
      for(int i=0; i <=30 ; i++)
      {
          int answer = pow(2,i);
          if(n==answer)
          {
              return true;
          }
      }
        return false;
    }
};
