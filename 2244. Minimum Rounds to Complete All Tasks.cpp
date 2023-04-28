class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> map;
        for(int i=0;i<tasks.size();i++){
            map[tasks[i]]++;
        }

        int total = 0;
        for(auto freq:map){
            if(freq.second==1) return -1;
            if(freq.second%3==0)  total+=freq.second/3;
            else if(freq.second%3) total+=freq.second/3+1;
        }       
        return total;
    }
};