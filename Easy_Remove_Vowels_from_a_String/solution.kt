class solution {
    fun removeVowels(s: String): String {
        return s.filterNot { 
            it == 'a' || 
            it == 'e' || 
            it == 'i' || 
            it == 'o' || 
            it == 'u'
        }
    }
}