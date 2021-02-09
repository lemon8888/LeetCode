void reverseString(char* s, int sSize) {
    for(int i = 0; i < sSize / 2; i++) {
        char a = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize - i - 1] = a;
    }
}
