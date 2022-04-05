//* Solution using a for loop and adding to a mutable list. */
class solution {
    fun shuffle(nums: IntArray, n: Int): IntArray {
        var r = mutableListOf<Int>()
        for (it in 0 until n) {
            r.add(nums[it])
            r.add(nums[it + n])
        }
        return r.toIntArray()
    }
}

//* Solution using list operations and collection transformations */
class solution {
    fun shuffle(nums: IntArray, n: Int): IntArray {
        val x = nums.slice(0 until n)
        val y = nums.slice(n until nums.size)   
        return x.zip(y).flatMap{ it.toList() }.toIntArray()
    }
}
