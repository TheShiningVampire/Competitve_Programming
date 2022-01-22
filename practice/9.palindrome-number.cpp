/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp = x;
        long long int y = 0;
        
        if (x<0)
        {
            return false;
        }

        while(x != 0) {
            y = (y*10) + x%10;
            x = x/10;
        }

        if (y == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
// @lc code=end

