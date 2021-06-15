char * restoreString(char * s, int* indices, int indicesSize){
    char r[indicesSize];
    for (int i = 0; i < indicesSize; i++) { 
        r[indices[i]] = s[i]; }
    for (int i = 0; i < indicesSize; i++) { 
        s[i] = r[i]; 
    }
    return s;
}
