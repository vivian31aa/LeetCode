class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int table[256];
        int ans = 0;
        for(int i=0;i<s.length();i++){
            int cnt = 1;
            memset(table, 0, sizeof(table));
            table[int(s[i])] = 1;
            for(int j=i+1;j<s.length();j++){
                if(table[int(s[j])]){
                    if(cnt > ans){
                        ans = cnt;
                    }
                    break;
                }
                table[int(s[j])] = 1;
                cnt++;
                if(j==s.length()-1 && cnt>ans){
                    ans = cnt;
                }
            }
        }
        if(ans == 0)    ans=s.length();
        return ans;
    }
};