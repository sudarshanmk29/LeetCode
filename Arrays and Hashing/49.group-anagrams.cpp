/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 *
 * https://leetcode.com/problems/group-anagrams/description/
 *
 * algorithms
 * Medium (71.89%)
 * Likes:    21588
 * Dislikes: 739
 * Total Accepted:    4.4M
 * Total Submissions: 6.1M
 * Testcase Example:  '["eat","tea","tan","ate","nat","bat"]'
 *
 * Given an array of strings strs, group the anagrams together. You can return
 * the answer in any order.
 *
 *
 * Example 1:
 *
 *
 * Input: strs = ["eat","tea","tan","ate","nat","bat"]
 *
 * Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
 *
 * Explanation:
 *
 *
 * There is no string in strs that can be rearranged to form "bat".
 * The strings "nat" and "tan" are anagrams as they can be rearranged to form
 * each other.
 * The strings "ate", "eat", and "tea" are anagrams as they can be rearranged
 * to form each other.
 *
 *
 *
 * Example 2:
 *
 *
 * Input: strs = [""]
 *
 * Output: [[""]]
 *
 *
 * Example 3:
 *
 *
 * Input: strs = ["a"]
 *
 * Output: [["a"]]
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= strs.length <= 10^4
 * 0 <= strs[i].length <= 100
 * strs[i] consists of lowercase English letters.
 *
 *
 */

// @lc code=start

#define __DEBUG 0
#if __DEBUG
#include <bits/stdc++.h>
using namespace std;
#endif

class Solution
{
public:
    bool isanagram(string str1, string str2)
    {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        return strcmp(str1.c_str(), str2.c_str());
    }

    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> result;
        while(!strs.empty())
        {
            vector<string> subset;
            subset.push_back(strs[0]);
            strs.erase(strs.begin());

            for(int j = 0; j < strs.size(); )
            {
                if(!isanagram(subset[0], strs[j]))
                {
                    subset.push_back(strs[j]);
                    strs.erase(strs.begin() + j);
                }
                else
                {
                    j++;
                }
            }
            result.push_back(subset);
        }
        return result;
    }
};

#if __DEBUG
int main()
{
    Solution s;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = s.groupAnagrams(strs);

    cout << "[";
    for (auto str : result)
    {
        cout << "[";
        for (auto s : str)
        {
            cout << s << " ";
        }
        cout << "]";
    }
    cout << "]";
    return 0;
}
#endif
// @lc code=end