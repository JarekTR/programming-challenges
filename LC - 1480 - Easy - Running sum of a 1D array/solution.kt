class solution {
    fun runningSum(nums: IntArray): IntArray {
        return nums.indices.map { nums.take(it + 1).sum() }.toIntArray()
    }
}
