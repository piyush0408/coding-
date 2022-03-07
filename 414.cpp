class Solution
{
public:
    int thirdMax(vector<int> &a)
    {

        map<int, int> m;
        int n = a.size();
        for (int i = 0; i < n; ++i)
        {
            ++m[a[i]];
        }
        if (m.size() >= 3)
        {

            auto it = m.end();
            int i = 0;
            while (i < 3)
            {
                ++i;
                --it;
            }
            return it->first;
        }
        else
        {
            auto it = m.end();
            --it;
            //            if(m.size()==2)
            //            {
            //                ++it;

            //            }
            return it->first;
        }
    }
};