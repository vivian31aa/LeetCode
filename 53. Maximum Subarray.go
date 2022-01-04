func maxSubArray(nums []int) int {
	tmp := 0
	max := -10000
	for _, i := range nums {
		tmp += i
		if tmp > max {
			max = tmp
		}
		if tmp < 0 {
			tmp = 0
		}
	}
    return max
}