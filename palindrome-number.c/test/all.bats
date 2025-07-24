@test "101 a palindrome" {
	"${MAIN}" 101
}

@test "121 a palindrome" {
	"${MAIN}" 121
}

@test "122221 a palindrome" {
	"${MAIN}" 122221
}

@test "321 not a palindrome" {
	! "${MAIN}" 321
}

@test "331 not a palindrome" {
	! "${MAIN}" 331
}

@test "10 not a palindrome" {
	! "${MAIN}" 10
}

@test "100 not a palindrome" {
	! "${MAIN}" 100
}

@test "1000 not a palindrome" {
	! "${MAIN}" 1000
}
