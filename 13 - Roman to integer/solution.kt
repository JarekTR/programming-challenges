class solution {
    fun romanToInt(s: String): Int {
        var count = 0
        var prev = ' '
        for (i in s.length - 1 downTo 0) {
            count += when (s[i]) {
                'C' -> when (prev) { 'D', 'M' -> -100 else -> 100 } 
                'X' -> when (prev) { 'L', 'C' -> -10 else -> 10 }
                'I' -> when (prev) { 'V', 'X' -> -1 else -> 1 }
                'M' -> 1000
                'D' -> 500
                'L' -> 50
                'V' -> 5
                else -> 0
            }
            prev = s[i]
        }
        return count
    }
}
