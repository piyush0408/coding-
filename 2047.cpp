class Solution
{
public:
    int countValidWords(string s)
    {

        int n = s.size();
        int check = 0, cnt = 0, cntp = 0, cnth = 0;
        for (int i = 0; i < n; ++i)
        {
            // cout<<s[i];

            if (s[i] == ' ')
            {
                cout << check;
                cntp = 0;
                cnth = 0;
                if (check == 0 && i - 1 >= 0 && s[i - 1] != ' ')
                    ++cnt;
                check = 0;
            }
            else
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    // cout<<s[i];
                    check = 1;
                }
                else
                {

                    if ((s[i] == '-') && ((i - 1 >= 0 && s[i - 1] >= 'a' && s[i - 1] <= 'z') && (i + 1 <= n - 1 && s[i + 1] >= 'a' && s[i + 1] <= 'z')))
                    {
                        cout << "hyp ";
                        ++cnth;
                        if (cnth > 1)
                            check = 1;
                    }
                    else
                    {

                        if ((s[i] == '!' || s[i] == '.' || s[i] == ',') && ((i + 1 <= n - 1 && s[i + 1] == ' ') || i == n - 1))
                        {

                            cout << "punc ";

                            ++cntp;
                            if (cntp > 1)
                                check = 1;
                        }
                        else
                        {

                            if (s[i] >= 'a' && s[i] <= 'z')
                            {
                                cout << "*";
                                continue;
                            }
                            else
                            {

                                cout << "last";
                                check = 1;
                            }
                        }
                    }
                }
            }
        }

        cout << cnt << check;
        if (check == 0 && s[n - 1] != ' ')
            ++cnt;
        return cnt;
    }
};
