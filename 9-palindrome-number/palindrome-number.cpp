class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // When the length is odd, we can get rid of the middle digit by reversedHalf / 10
        // For example, when input is 12321, at the end of loop x = 12, reversedHalf = 123,
        // so reversedHalf / 10 == 12.
        return x == reversedHalf || x == reversedHalf / 10;
    }
};