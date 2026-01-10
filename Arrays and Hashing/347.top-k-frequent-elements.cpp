/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 *
 * https://leetcode.com/problems/top-k-frequent-elements/description/
 *
 * algorithms
 * Medium (65.46%)
 * Likes:    19114
 * Dislikes: 846
 * Total Accepted:    3.3M
 * Total Submissions: 5M
 * Testcase Example:  '[1,1,1,2,2,3]\n2'
 *
 * Given an integer array nums and an integer k, return the k most frequent
 * elements. You may return the answer in any order.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [1,1,1,2,2,3], k = 2
 * 
 * Output: [1,2]
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [1], k = 1
 * 
 * Output: [1]
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: nums = [1,2,1,2,1,2,3,1,3,2], k = 2
 * 
 * Output: [1,2]
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= nums.length <= 10^5
 * -10^4 <= nums[i] <= 10^4
 * k is in the range [1, the number of unique elements in the array].
 * It is guaranteed that the answer is unique.
 * 
 * 
 * 
 * Follow up: Your algorithm's time complexity must be better than O(n log n),
 * where n is the array's size.
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
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> count;
        for(auto x: nums)
        {
            count[x]++;
        }

        map<int, vector<int>> freq_map;
        for(auto y: count)
        {
            freq_map[y.second].push_back(y.first);
        }

        vector<int> topkelem;
        auto it = freq_map.end();
        it--;
        while(k > 0)
        {
            for(auto x: it->second)
            {
                topkelem.push_back(x);
                k--;
            }
            it--;
        }
        return topkelem;
    }
};

#if __DEBUG
int main()
{
    Solution s;
    vector<int> nums = {1,2,1,2,1,2,3,1,3,2};
    int k = 2;
    vector<int> result;
    result = s.topKFrequent(nums, k);
    cout<<"[";
    for(auto i = result.begin(); i != result.end(); i++)
    {
        if(i==result.end() - 1)
        {
            cout<<*i;
        }
        else
        {
            cout<<*i<<",";
        }
    }
    cout<<"]"<<endl;
    return 0;
}
#endif
// @lc code=end

