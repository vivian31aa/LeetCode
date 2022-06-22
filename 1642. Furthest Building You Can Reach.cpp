class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> count;
        int i, diff=0;
        
        for(i=0;i<heights.size()-1;i++){
            diff=heights[i+1]-heights[i];
            if(diff<=0)  continue;
            count.push(diff);
            bricks-=diff;
            if(bricks<0){
                bricks+=count.top();
                count.pop();
                ladders--;
            }
            if(ladders<0)   break;
            
        }
        return i;
    }
};