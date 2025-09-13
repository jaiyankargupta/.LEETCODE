/*
 * @lc app=leetcode id=3541 lang=cpp
 *
 * [3541] Find Most Frequent Vowel and Consonant
 */

// @lc code=start
class Solution
{

private:
    bool isVowel(char ch)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return true;
        }
        return false;
    }

public:
    int maxFreqSum(string s)
    {

        int maxVowel = 0, maxCons = 0;

        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            char ch = (char)(i + 'a');
            int f = freq[i];

            if (isVowel(ch))
            {
                maxVowel = max(maxVowel, f);
            }

            else
            {
                maxCons = max(maxCons, f);
            }
        }

        return maxCons + maxVowel;
    }
};
// @lc code=end
