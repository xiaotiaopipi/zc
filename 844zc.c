int  stack(char *arry,char* arry2) {
    int count = 0;
    while (*arry != '\0') {
        if (*arry != '#') {
            arry2[count] = *arry;
            count++;
        } else if (count > 0) {
            count--;
        } else {
            count = 0;
        }
        arry++;
    }
    return count;
}
bool backspaceCompare(char* S, char* T) {
    char *arry_s = (char *)malloc(201*sizeof(char));
    if (arry_s == NULL) return 0;
    char *arry_t = (char *)malloc(201*sizeof(char));
    if (arry_t == NULL) return 0;
    int count_s = stack(S,arry_s);
    int count_t = stack(T,arry_t);
    bool is_equal = (count_s == count_t && strncmp(arry_s, arry_t, count_s) == 0);
    free(arry_s);
    free(arry_t);
    return is_equal;
}
