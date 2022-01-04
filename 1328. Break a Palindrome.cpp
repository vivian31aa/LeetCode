class Solution {
public:
    string breakPalindrome(string palindrome)
    {
        if (palindrome.length() == 1)
        {
            return "";
        }
        else
        {
            for (int i = 0; i < palindrome.length()/2; i++)
            {
                if (palindrome[i] != 'a')
                {
                    palindrome[i] = 'a';
                    return palindrome;
                }
            }
            for(int i=palindrome.length()-1;i>=palindrome.length()/2;i--){
                if(palindrome[i]!='b'){
                    palindrome[i]='b';
                    return palindrome;
                }
            }
        }
        return palindrome;
    }
};