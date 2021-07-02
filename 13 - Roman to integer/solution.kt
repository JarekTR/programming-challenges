class Solution {
    fun romanToInt(s: String): Int {
        var count = 0
        var prev = ' '
        for (i in s.length - 1 downTo 0) {
            count += when (s[i]) {
                'I' -> if (prev == 'V' || prev == 'X') -1 else 1
                'X' -> if (prev == 'L' || prev == 'C') -10 else 10
                'C' -> if (prev == 'D' || prev == 'M') -100 else 100
                'V' -> 5
                'L' -> 50
                'D' -> 500
                'M' -> 1000
                else -> { 0 }
            }
            prev = s[i]
        }
        return count
    }
}
