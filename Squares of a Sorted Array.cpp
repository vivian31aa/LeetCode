class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares(nums.size());
        // for(int i=0;i<nums.size();i++){
        //     squares.push_back(nums[i]*nums[i]);
        // }
        // sort(squares.begin(),squares.end());
        // return squares;
        
        int left=0,right=nums.size()-1,index=nums.size()-1;
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                squares[index--]=nums[left]*nums[left];
                left++;
            }
            else{
                squares[index--]=nums[right]*nums[right];
                right--;
            }
        }
        return squares;
    }
};