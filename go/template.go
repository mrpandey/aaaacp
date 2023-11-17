package main

import (
	"bufio"
	"os"
	"strconv"
	"strings"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	t := readInt(in)

	for t > 0 {
		t--
	}
}

func absInt(a int) int {
	if a < 0 {
		return -a
	}
	return a
}

func maxInt(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func minInt(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func gcd(a, b int) int {
	a = absInt(a)
	b = absInt(b)

	if a < b {
		a, b = b, a
	}

	if b == 0 {
		return a
	}

	if a%b == 0 {
		return b
	}

	return gcd(b, a%b)
}

// returns a^b % m
func powInt(a, b, m int) int {
	if b == 0 {
		return 1
	}
	if a == 0 {
		return 0
	}

	ans := 1
	for b > 0 {
		if b%2 == 1 {
			ans = (a * ans) % m
		}
		a = (a * a) % m
		b /= 2
	}

	return ans
}

func readInt(in *bufio.Reader) int {
	nStr, _ := in.ReadString('\n')
	nStr = strings.ReplaceAll(nStr, "\r", "")
	nStr = strings.ReplaceAll(nStr, "\n", "")
	n, _ := strconv.Atoi(nStr)
	return n
}

func readArrInt(in *bufio.Reader) []int {
	numbs := readLineNumbs(in)
	arr := make([]int, len(numbs))
	for i, n := range numbs {
		val, _ := strconv.Atoi(n)
		arr[i] = val
	}
	return arr
}

func readLineNumbs(in *bufio.Reader) []string {
	line, _ := in.ReadString('\n')
	line = strings.ReplaceAll(line, "\r", "")
	line = strings.ReplaceAll(line, "\n", "")
	numbs := strings.Split(line, " ")
	return numbs
}
