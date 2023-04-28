class Solution {
public:
    bool capacity(vector<int>& weights, int c, int days){
        int current=0, daysNeed=1;
        for(int weight :weights){
            current+=weight;
            if(current > c){
                daysNeed++;
                current = weight;
            }
        }
        return daysNeed <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int total=0, maxWeight=0;
        for(int weight : weights){
            total+= weight;
            maxWeight=max(maxWeight,weight);
        }
        
        int l=maxWeight, r=total;
        
        while(l<r){
            int mid=(l+r)/2;
            if(capacity(weights, mid, days)){
               r = mid;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};