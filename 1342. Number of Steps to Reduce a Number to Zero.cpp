class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        // while(num!=0){
        //     if(num&1){
        //         num--;
        //     }
        //     else{
        //         num>>=1;
        //     }
        //     ans++;
        // }
        // return ans;

        if(num==0)  return ans;
        while(num!=0){
            if(num&1){
                ans+=2;
            }
            else{
                ans+=1;
            }
            num>>=1;
        }
        return ans-1;
    }
};