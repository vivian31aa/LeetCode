class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> people(1005,0);
        bool flag=true;
        for(int i=0;i<trips.size();i++){
            for(int j=trips[i][1];j<trips[i][2];j++){
                people[j]+=trips[i][0];
                if(people[j]>capacity){
                    flag=false;
                    break;
                }
            }
        }
        return flag;
    }
};