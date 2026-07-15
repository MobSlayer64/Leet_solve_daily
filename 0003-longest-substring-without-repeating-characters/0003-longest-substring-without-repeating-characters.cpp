class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        for (int i = 0; i < s.size(); i++) {
            int freq[256] = {0}; 
            for (int j = i; j < s.size(); j++) {
                if (freq[s[j]] == 1) break; 
                freq[s[j]] = 1;
                maxLen = max(maxLen, j - i + 1);
            }
        }
        return maxLen;
    }
};