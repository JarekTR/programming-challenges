class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }
        n = len(s)
        count = roman[s[n - 1]]
        for i in range(n - 1, 0, -1):
            prev = roman[s[i - 1]]
            idx = roman[s[i]]
            if prev >= idx: count += prev
            else: count -= prev
        return count
