class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0)    return 0;
        
        sort(points.begin(),points.end(),[](vector<int>& a,vector<int>& b){return a[1]<b[1];});
        int right=points[0][1],arrow=1;
        for(int i=1;i<points.size();i++){
            if(points[i][0]>right){
                right=points[i][1];
                arrow++;
            }
        }
        return arrow;
    }
};