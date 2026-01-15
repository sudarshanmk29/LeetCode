/**
 * Given a string s and an array of strings words, return the number of words[i]
 * that is a subsequence of s.
 * 
 * A Subsequence of a string is a new string generated from the original string with
 * some characters (can be none) deleted without changing the relative order if the 
 * remaining characters.
 * 
 * Eg: "ace" is a subsequence of "abcde"
 * 
 * Eg1: 
 * Input s = "abcde", words = ["a", "bb", "acd", "ace"]
 * Output: 3
 * Explanation: There are three strings in words that are subsequences of s: "a", "acd", "ace"
 * 
 * Eg2: 
 * Input s = "dsahjpjauf", words = ["ahjpjau", "ja", "ahbwzgqnuk", "tnmlanowax"]
 * output: 2
 */

#define __DEBUG 1
#if __DEBUG
#include <bits/stdc++.h>
using namespace std;
#endif

class Solution
{
public:
    int numberofsubstrings(string &s, vector<string> &words)
    {
        unordered_map<char, vector<int>> letters;
        int output = 0;
        for(int i = 0; i < s.size(); i++)
        {
            letters[s[i]].push_back(i);
        }

        for(auto x: words)
        {
            for(auto z: x)
            {
                auto it = letters.find(z);
                if(it == letters.end())
                    break;
                
            }
        }
        return output;
    }
};




#if __DEBUG
int main()
{
    vector<string> words = {"aba", "acd", "aee", "j"};
    string s = "aabcdee";

    Solution sol;
    cout << sol.numberofsubstrings(s, words) << endl;
    return 0;
}
#endif