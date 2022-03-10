class Solution
{
public:
    bool checkIfExist(vector<int> &a)
    {

        map<int, int> m;
        int n = a.size();
        for (int i = 0; i < n; ++i)
        {
            ++m[a[i]];
        }

        for (auto i = m.begin(); i != m.end(); ++i)
        {
            if (i->first % 2 == 0 && i->second > 0)
            {

                int key = (i->first) / 2;
                cout << i->first << ":" << key << " ";
                // key=11;
                if (i->first == 0 && i->second > 1)
                    return true;
                else if (m[key] > 0 && key != i->first)
                    return true;
                cout << "cnt:" << m[key] << " ";
            }
        }
        return false;
    }
};