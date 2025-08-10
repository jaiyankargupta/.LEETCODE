/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (auto &i : s)
        {
            if (i == '(' || i == '[' || i == '{')
            {
                st.push(i);
            }

            else if (i == ')')
            {
                if (!st.empty() && st.top() == '(')
                {
                }
            }
        }
    }
};
// @lc code=end

({(}))
