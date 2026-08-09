class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        // If needle is longer than haystack, it can't match
        if (m > n) return -1;

        for (int i = 0; i <= n - m; ++i) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) {
                return i; // First full match found
            }
        }

        return -1;
    }
};