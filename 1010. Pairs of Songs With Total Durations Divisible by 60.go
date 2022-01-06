func numPairsDivisibleBy60(time []int) int {
    var c [65]int
    var ans int
    for i := range time{
    	time[i]%=60
    	ans+=c[(60-time[i])%60]
    	c[time[i]]++
    }
    return ans
}