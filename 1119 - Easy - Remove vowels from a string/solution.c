char* removeVowels(char * s) {
    int c = 0;
    int size = strlen(s);
    char *ret = malloc(size);
    for (int i = 0; i < size; i++) {
        if (
            s[i] != 'a' &&
            s[i] != 'e' &&
            s[i] != 'i' &&
            s[i] != 'o' &&
            s[i] != 'u'
        ) {
            ret[c] = s[i];
            c++;
        }
    }
    ret[c] = '\0';
    return ret;
}
