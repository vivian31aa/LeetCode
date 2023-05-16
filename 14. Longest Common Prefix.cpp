class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common=strs[0];
        int min=strs[0].length();
        for(int i=1;i<strs.size();i++){
            if(strs[i].length()<min)    min=strs[i].length();
            for(int j=0;j<strs[i].length();j++){
                if(common[j]!=strs[i][j]){
                    common=strs[i].substr(0,j);
                    break;
                }
            }
        }
        return common.substr(0,min);
    }
};