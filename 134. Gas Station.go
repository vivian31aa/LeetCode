func canCompleteCircuit(gas []int, cost []int) int {
	total := 0
	sum := 0
	start := 0
	for i := 0; i < len(gas); i++ {
		total += gas[i] - cost[i]
		sum += gas[i] - cost[i]
		if sum < 0 {
			sum = 0
			start = i + 1
		}
	}
	if total < 0 {
		return -1
	}
	return start
}