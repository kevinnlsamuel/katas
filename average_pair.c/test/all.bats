@test "sample 1" {
	${MAIN} 2.5 1 2 3
}
@test "sample 2" {
	${MAIN} 8 1 3 3 5 6 7 10 12 19
}
@test "sample 3" {
	! ${MAIN} 4.1 -1 0 3 4 5 6
}
@test "sample 4" {
	! ${MAIN} 4
}
