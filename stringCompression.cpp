class Solution {
public:
    int compress(vector<char>& chars) {
        int fakeIndex = 0;
        int kaamKeIndex = 0;
        int n = chars.size();        
        while(fakeIndex < n)
        {
            int j = fakeIndex + 1;
            while(j < n && chars[fakeIndex] == chars[j])
            {
                j++;
            }
            chars[kaamKeIndex++] = chars[fakeIndex];
            if(j-fakeIndex > 1)
            {
              string str = to_string(j-fakeIndex);
                for(int k = 0 ; k < str.length() ; k++)
                {
                    chars[kaamKeIndex++] = str[k];
                }
            }
            fakeIndex = j;
        }
        return kaamKeIndex;
    }
};
