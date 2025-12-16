class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Хэш-таблица: символ -> его последняя позиция + 1
        unordered_map<char, int> charIndex;
        
        int maxLen = 0;
        int left = 0;  // Левая граница окна
        
        for (int right = 0; right < s.length(); right++) {
            char c = s[right];
            
            // Если символ уже встречался в текущем окне,
            // сдвигаем левую границу
            if (charIndex.count(c) && charIndex[c] > left) {
                left = charIndex[c];
            }
            
            // Обновляем позицию символа
            charIndex[c] = right + 1;
            
            // Обновляем максимальную длину
            maxLen = max(maxLen, right - left + 1);
        }
        
        return maxLen;
    }
};