/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 *
 * https://leetcode.com/problems/contains-duplicate/description/
 *
 * algorithms
 * Easy (63.87%)
 * Likes:    13580
 * Dislikes: 1350
 * Total Accepted:    5.9M
 * Total Submissions: 9.2M
 * Testcase Example:  '[1,2,3,1]'
 *
 * Given an integer array nums, return true if any value appears at least twice
 * in the array, and return false if every element is distinct.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [1,2,3,1]
 *
 * Output: true
 *
 * Explanation:
 *
 * The element 1 occurs at the indices 0 and 3.
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [1,2,3,4]
 *
 * Output: false
 *
 * Explanation:
 *
 * All elements are distinct.
 *
 *
 * Example 3:
 *
 *
 * Input: nums = [1,1,1,3,3,4,3,2,4,2]
 *
 * Output: true
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 10^5
 * -10^9 <= nums[i] <= 10^9
 *
 *
 */
#define _DEBUG 0

#if _DEBUG
#include <bits/stdc++.h>
using namespace std;
#endif


// @lc code=start
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        // unordered_map<int, int> map;
        // for(int x = 0; x < nums.size(); x++)
        // {
        //     int element_count = 0;
        //     auto it = map.find(nums[x]);
        //     if(it != map.end())
        //     {
        //         return true;
        //     }
        //     map.insert({nums[x], element_count++});
        // }
        sort(nums.begin(), nums.end());

        for(int i = 0, j = i+1; j < nums.size(); j++, i++)
        {
            if(nums[i] == nums[j])
            {
                return true;
            }
        }
        return false;
    }
};

#if _DEBUG
int main()
{
    Solution s;
    vector<int> num = {1, 2, 1, 4, 5};
    if (!s.containsDuplicate(num))
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "true" << endl;
    }
    return 0;
}
#endif

// @lc code=end
