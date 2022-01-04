class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string,int> m;
        vector<string> ans;
        int total = 0;
        for (int i = 0; i < emails.size(); i++)
        {
            int k = 0,j=0,p=0;
            string a;
            for (j = 0; emails[i][j] != '@' && emails[i][j] != '+'; j++)
            {
                if (emails[i][j] != '.')
                {
                    a.insert(k,1,emails[i][j]);
                    k++;
                }
            }
            for(p=j;p<emails[i].length();p++){
                if(emails[i][p]=='@')   break;
            }
            for(int r=p;r<emails[i].length();r++){
                a.insert(k,1,emails[i][r]);
                k++;
            }
            if(++m[a]==1)    total++;
        }
        
        return total;
    }
};