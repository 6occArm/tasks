int lengthOfLongestSubstring(char* s) {
    int charIndex[128] = {0};
    
    int maxLen = 0;
    int left = 0;
    
    for (int right = 0; s[right] != '\0'; right++) {
        char c = s[right];

        if (charIndex[(int)c] > left) {
            left = charIndex[(int)c];
        }

        charIndex[(int)c] = right + 1;
        
        int currentLen = right - left + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }
    
    return maxLen;
}
