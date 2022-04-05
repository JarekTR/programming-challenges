class solution {
    fun restoreString(s: String, indices: IntArray): String {
        val r = CharArray(indices.size)
        indices.forEachIndexed { it, idx -> r[idx] = s[it] }
        return String(r)
    }
}
