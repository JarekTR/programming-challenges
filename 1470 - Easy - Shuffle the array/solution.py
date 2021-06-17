# Solution using for loop and appending to an empty list.
class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        ret = []
        for i in range(n):
            ret.append(nums[i])
            ret.append(nums[i + n])
        return ret

# Solution using list slicing and appending to an empty list.
class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        ret = []
        x = nums[0:n]
        y = nums[n:]
        for i in range(n):
            ret.append(x[i])
            ret.append(y[i])
        return ret

# Solution using zip with a list comprehension.
class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        return [y for x in zip(nums[0:n], nums[n:]) for y in x]