/*
 * @lc app=leetcode id=869 lang=cpp
 *
 * [869] Reordered Power of 2
 */

// @lc code=start

class Solution
{

    bool solve(int n)
    {
        string ns = to_string(n);
        sort(ns.begin(), ns.end());

        for (int i = 0; i < 30; i++)
        {
            int val = 1 << i;
            string valS = to_string(val);
            sort(valS.begin(), valS.end());
            if (valS == ns)
            {
                return true;
            }
        }
        return false;
    }

public:
    bool reorderedPowerOf2(int n)
    {
        return solve(n);
    }
};
// @lc code=end
