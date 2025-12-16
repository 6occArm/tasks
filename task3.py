class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_index = {}  # символ -> последняя позиция + 1
        max_len = 0
        left = 0
        
        for right, c in enumerate(s):
            # Если символ уже в окне — сдвигаем левую границу
            if c in char_index and char_index[c] > left:
                left = char_index[c]
            
            char_index[c] = right + 1
            max_len = max(max_len, right - left + 1)
        
        return max_len
