bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char* s1 = (char*) malloc(sizeof(char) * (strlen(word1[0]) + 1));
    char* s2 = (char*) malloc(sizeof(char) * (strlen(word2[0]) + 1));
    strcpy(s1, word1[0]);
    strcpy(s2, word2[0]);
    for (int i = 1; i < word1Size; i++) {
        s1 = (char*) realloc(s1, (strlen(word1[i]) + strlen(s1) + 1));
        strcat(s1, word1[i]);
    }
    for (int j = 1; j < word2Size; j++) {
        s2 = (char*) realloc(s2, (strlen(word2[j]) + strlen(s2) + 1));
        strcat(s2, word2[j]);
    }
    int flag = strcmp(s1, s2) ? 0 : 1;
    return flag;
}