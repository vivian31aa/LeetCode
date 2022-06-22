class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int dp[n][n];
        int begin=0,length=1;
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                begin=i;
                length=2;
            }
        }
        
        for(int j=2;j<n;j++){
            for(int i=0;i<n-j;i++){
                if(s[i]==s[i+j] && dp[i+1][i+j-1]==1){
                    dp[i][i+j]=1;
                    begin=i;
                    length=j+1;
                }
            }
        }
        return s.substr(begin,length);
    }
};