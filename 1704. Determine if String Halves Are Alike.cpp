class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char> vowels={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int len = s.size()/2;
        int half=0, all = 0;
        for(int i=0;i<len;i++){
            if(vowels.count(s[i]))  half++;
        }
        for(int i=0;i<s.size();i++){
            if(vowels.count(s[i]))  all++;
        }
        return half*2==all;
    }
};