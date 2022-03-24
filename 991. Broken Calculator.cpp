class Solution {
public:
    int brokenCalc(int startValue, int target) {
        // Can't be multiple by 2 anymore.
        if(startValue>=target)  return startValue-target;
        
        if(target%2==1) return 1+brokenCalc(startValue,++target);
        else    return 1+brokenCalc(startValue,target/2);
    }
};