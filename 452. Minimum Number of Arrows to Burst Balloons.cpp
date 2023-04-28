class Solution {
public:
    static bool compare(vector<int> &a, vector<int>&b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0)  return 0;

        sort(points.begin(),points.end(),compare);
        int arrow = 1;
        int direction = points[0][1];
        for(int i=1;i<points.size();i++){
            if(direction<points[i][0]){
                direction=points[i][1];
                arrow++;
            }
        }
        return arrow;
    }
};