class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &a)
    {
        vector<int> l;
        int n = a.size();
        int i = 1;
        while (i < n - 1)
        {
            int j = i;
            int x = 2;
            while (j + 1 < n && a[j + 1] - a[j] == a[j] - a[j - 1])
            {
                ++j;
                ++x;
            }
            // cout<<j<<" "<<x<<" ";

            l.push_back(x);
            i = j + 1;
        }
        // cout<<endl;
        int ans = 0;
        for (int i = 0; i < l.size(); ++i)
        {
            int x = l[i] - 2;
            ans = ans + ((x) * (x + 1) / 2);
        }
        return ans;
    }
};