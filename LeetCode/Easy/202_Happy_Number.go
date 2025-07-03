func isHappy(n int) bool {
    // Helper function to compute sum of squares of digits
    digitSumSquare := func(n int) int {
        sum := 0
        for n != 0 {
            digit := n % 10
            sum += digit * digit
            n /= 10
        }
        return sum
    }

    seen := make(map[int]bool) // To detect cycles

    for n != 1 {
        if seen[n] {
            return false // Loop detected
        }
        seen[n] = true
        n = digitSumSquare(n)
    }


//space complexity is O(n)
//time complexity is O(n)