class Solution
{
public:
    bool isSubsequence(string s, string t)
    {

        int i = 0, j = 0;
        int n = s.size();
        int m = t.size();
        while (j < m)
        {
            if (t[j] == s[i])
            {
                ++i;
            }

            ++j;
        }
        if (i == n)
            return true;
        return false;
    }
};