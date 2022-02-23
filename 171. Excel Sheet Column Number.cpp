class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum=0,len=columnTitle.length();
        for(int i=len-1,k=0;i>=0;i--,k++){
            sum+=(int(columnTitle[i])-64)*pow(26,k);
        }
        return sum;
    }
};