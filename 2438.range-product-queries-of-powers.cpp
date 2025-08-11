/*
 * @lc app=leetcode id=2438 lang=cpp
 *
 * [2438] Range Product Queries of Powers
 */

// @lc code=start
class Solution
{
public:
    static constexpr long MOD = 1'000'000'007;

    static vector<int> productQueries(int n, const vector<vector<int>> &queries)
    {
        vector<int> powers;
        powers.reserve(32);
        for (int i = 0; i < 32; ++i)
        {
            const int mask = 1 << i;
            if (n & mask)
                powers.push_back(mask);
        }

        vector<int> ans;
        ans.reserve(size(queries));
        for (const vector<int> &query : queries)
        {
            const int left = query[0];
            const int right = query[1];

            long prod = 1;
            for (int i = left; i <= right; ++i)
            {
                prod = prod * powers[i] % MOD;
            }
            ans.push_back(prod);
        }

        return ans;
    }
};
// @lc code=end
