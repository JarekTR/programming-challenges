class Solution(object):
    def removeVowels(self, s):
        v = { v for v in "aeiou" }
        return ''.join([c for c in s if c not in v])
