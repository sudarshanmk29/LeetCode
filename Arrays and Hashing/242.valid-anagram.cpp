/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 *
 * https://leetcode.com/problems/valid-anagram/description/
 *
 * algorithms
 * Easy (67.52%)
 * Likes:    13902
 * Dislikes: 460
 * Total Accepted:    5.6M
 * Total Submissions: 8.3M
 * Testcase Example:  '"anagram"\n"nagaram"'
 *
 * Given two strings s and t, return true if t is an anagram of s, and false
 * otherwise.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: s = "anagram", t = "nagaram"
 * 
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "rat", t = "car"
 * 
 * Output: false
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= s.length, t.length <= 5 * 10^4
 * s and t consist of lowercase English letters.
 * 
 * 
 * 
 * Follow up: What if the inputs contain Unicode characters? How would you
 * adapt your solution to such a case?
 * 
 */

// @lc code=start
#define __DEBUG 0
#if __DEBUG
#include <bits/stdc++.h>
using namespace std;
#endif

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        size_t str_size = max(s.size(), t.size());
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int res = strcmp(s.c_str(), t.c_str());
        return (res == 0)? true : false;
    }
};

#if __DEBUG
int main()
{
    Solution s;
    vector<string> str = {"cat", "rat"};
    if(s.isAnagram(str[0], str[1]))
        cout<<"\ntrue\n";
    else
        cout<<"\nfalse\n";

    return 0;
}
#endif
// @lc code=end

