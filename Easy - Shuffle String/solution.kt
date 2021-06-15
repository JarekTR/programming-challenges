class solution {
    fun restoreString(s: String, indices: IntArray): String {
        val c = CharArray(indices.size)
        indices.forEachIndexed { it, idx -> c[idx] = s[it] }
        return String(c)
    }
}