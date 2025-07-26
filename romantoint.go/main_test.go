package main
import "testing"
import "fmt"

func TestRomanToInt(t *testing.T){
	testmap := map[string]int{"III": 3, "LVIII": 58, "MCMXCIV": 1994}
	for key, value := range testmap {
		title := fmt.Sprintf("%s is %d", key, value)
		t.Run(title, func (t *testing.T) {
			got := romanToInt(key)
			want := value
			if got != want {
				t.Errorf("got %d; but want %d", got, want)
			}
		})
	}
}
