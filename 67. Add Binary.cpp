class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.length()-1, j=b.length()-1, carry=0, sum;
        while(i>=0||j>=0){
            sum=carry;
            sum+=(i>=0)?a[i--]-'0':0;
            sum+=(j>=0)?b[j--]-'0':0;
            ans=to_string(sum%2)+ans;
            carry=sum/2;
        }
        if(carry)   ans=to_string(1)+ans;
        return ans;
    }
};