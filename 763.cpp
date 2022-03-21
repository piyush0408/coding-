class Solution
{
public:
    vector<int> partitionLabels(string s)
    {

        set<char> check;
        stack<pair<int, int>> st;
        int n = s.size();
        for (int i = 0; i < n; ++i)
        {

            if (check.find(s[i]) == check.end())
            {
                pair<int, int> t = {i, i};
                check.insert(s[i]);
                for (int j = i + 1; j < n; ++j)
                {

                    if (s[j] == s[i])
                    {
                        t.second = j;
                    }
                }

                if (!st.empty())
                {
                    pair<int, int> x = st.top();
                    st.pop();
                    if (t.second > x.second && t.first >= x.first && t.first < x.second)
                    {
                        x.second = t.second;
                        st.push(x);
                    }
                    else if (t.second < x.second && t.first >= x.first && t.first < x.second)
                        // x.second=t.second;;
                        st.push(x);

                    else if (t.second > x.second && t.first > x.second)
                    {
                        st.push(x);
                        st.push(t);
                    }
                }
                else
                {
                    st.push(t);
                }
            }
            //             else
            //                {
            //                 check.insert(s[i]);

            //                  pair<int,int> t= {i,i};
            //                 st.push(t)
            //                }
        }
        vector<int> ans;

        while (!st.empty())
        {
            pair<int, int> x = st.top();
            st.pop();
            cout << x.first << " " << x.second << endl;
            ;
            int len = x.second - x.first + 1;
            ans.push_back(len);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
