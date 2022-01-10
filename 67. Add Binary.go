func addBinary(a string, b string) string {
    ans := ""
    i := len(a) - 1
    j := len(b) - 1
    carry := 0
    for i >= 0 || j >= 0 {
        sum := carry
        if i >= 0 {
            sum += int(a[i]) - '0'
            i -= 1
        } else {
            sum += 0
        }
        if j >= 0 {
            sum += int(b[j]) - '0'
            j -= 1
        } else {
            sum += 0
        }
        ans = strconv.Itoa(sum%2) + ans
        carry = sum / 2
    }
    if carry == 1 {
        ans = strconv.Itoa(1) + ans
    }
    return ans
}