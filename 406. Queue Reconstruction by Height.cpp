class Solution {
public: 
    static bool compare(vector<int> &a,vector<int> &b){
        if(a[0]==b[0])  return a[1]<b[1];
        return a[0]>b[0];
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> ans;
        sort(people.begin(),people.end(),compare);
        for(int i=0;i<people.size();i++){
            ans.insert(people[i][1]+ans.begin(),people[i]);
        }
        return ans;
    }
};