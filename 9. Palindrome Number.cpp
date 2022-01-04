class Solution {
public:
     bool isPalindrome(int x)
    {
        
        if (x < 0)
            return false;
        string s=to_string(x);
        string reverse=s;
        for(int i=0;i<reverse.length();i++){
            reverse[i]=s[reverse.length()-i-1];
        }
        for (int i = 0; i < reverse.length() / 2; i++)
        {
            if (reverse[i] != reverse[reverse.length() - 1 - i])
            {
                return false;
            }
        }
        return true;
    
    }
};