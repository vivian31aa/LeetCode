class Solution {
public:
    static bool compare(vector<int> &a, vector<int> &b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int total=0,i=0;
        for(i=0;i<boxTypes.size();i++){
            if(truckSize-boxTypes[i][0]<=0) break;
            truckSize-=boxTypes[i][0];
            total+=boxTypes[i][0]*boxTypes[i][1];
        }
        if(i!=boxTypes.size())  total+=truckSize*boxTypes[i][1];
        return total;
    }
};