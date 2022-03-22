class Solution
{
public:
    string getSmallestString(int n, int k)
    {

        string s = string(n, 'a');
        // cout<<s;
        // return s;

        for (int i = n - 1; i >= 0; --i)
        {
            int val = min(26, k - i);
            s[i] = 'a' + val - 1;
            k = k - val;
        }
        return s;
    }
};