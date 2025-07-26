package main

var romannumerals = map[rune]int{
	'I': 1,
	'V': 5,
	'X': 10,
	'L': 50,
	'C': 100,
	'D': 500,
	'M': 1000,
}


func romanToInt (s string) (sum int) {
	for i := 0; i < len(s); i++ {
		char := rune(s[i])
		next := rune(0)
		if i+1 < len(s) {
			next = rune(s[i+1])
		}
		if next == 0 || romannumerals[char] >= romannumerals[next] {
			sum += romannumerals[char]
		} else {
			sum -= romannumerals[char]
		}
	}
	return
}
