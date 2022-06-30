class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26,0);
        int deletion=0;
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
      
        for(int i=1;i<26;i++){
            if(freq[i]==0)  break;
            if(freq[i]>=freq[i-1]){
                int tmp=freq[i];
                freq[i]=max(freq[i-1]-1,0);
                deletion+=tmp-freq[i];
            }
        }
        return deletion;
    }
};