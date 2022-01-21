class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(begin(piles), end(piles));
        int hour;
        int m;
        while(l<=r){
            m = (l+r)/2;
            hour = 0;
            for(int i=0;i<piles.size();i++){
                hour += (piles[i]-1)/m + 1;
            }
            if(hour<=h){
                r = m - 1;
            }
            else{
                l = m + 1;
            }
        }
        return l;
    }
};