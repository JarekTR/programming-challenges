char * restoreString(char * s, int* indices, int indicesSize){
    char c[indicesSize];
    for (int i = 0; i < indicesSize; i++) { 
        c[indices[i]] = s[i]; }
    for (int i = 0; i < indicesSize; i++) { 
        s[i] = c[i]; 
    }
    return s;
}