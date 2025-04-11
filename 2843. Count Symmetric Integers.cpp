class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            string str=to_string(i);
            if(str.length()%2==1)   continue;
            int half=str.length()/2;
            int leftsum=0,rightsum=0;
            for(int i=0;i<half;i++){
                leftsum+=str[i]-'0';
            }
            for(int i=half;i<str.length();i++){
                rightsum+=str[i]-'0';
            }
            if(leftsum==rightsum)   ans++;
        }
        return ans;
    }
};