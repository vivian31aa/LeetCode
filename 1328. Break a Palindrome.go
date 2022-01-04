func breakPalindrome(palindrome string) string {
	if len(palindrome) == 1 {
		return ""
	}
	tmp := []rune(palindrome)
	for i := 0; i < len(palindrome)/2; i++ {
		if tmp[i] != 'a' {
			tmp[i] = 'a'
			return string(tmp)
		}
	}
	for i := len(palindrome) - 1; i >= len(palindrome)/2; i-- {
		if tmp[i] != 'b' {
			tmp[i] = 'b'
			return string(tmp)
		}
	}

	return palindrome
}