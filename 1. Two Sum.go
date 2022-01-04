func twoSum(nums []int, target int) []int {
    var ans []int
    table := make(map[int]int)
    for i:=0;i<len(nums);i++{
        if table[target-nums[i]]>0{
            ans=append(ans,table[target-nums[i]]-1)
            ans=append(ans,i)
        }else{
            table[nums[i]]=i+1;
        }
    }
    return ans
}