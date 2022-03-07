class Solution
{
public:
    bool canPlaceFlowers(vector<int> &a, int x)
    {

        int n = a.size();
        int cnt = x;

        if (n == 1)
        {
            if (a[0] == 0 && x == 1)
                return true;
        }
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 0)
            {

                if (i == 0)
                {
                    if (i + 1 <= n - 1 && a[i + 1] == 0)

                    {
                        --cnt;
                        a[i] = 1;
                    }
                }
                else if (i == n - 1 && a[i - 1] == 0)
                {
                    a[i] = 1;
                    --cnt;
                }
                else if (i + 1 <= n - 1 && i - 1 >= 0 && a[i + 1] == 0 && a[i - 1] == 0)
                {
                    --cnt;
                    a[i] = 1;
                }
            }
        }
        if (cnt <= 0)
            return true;
        else
            return false;
    }
};