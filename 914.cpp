class Solution
{

public:
    int gcd(int a, int b)
    {
        // Everything divides 0
        if (a == 0)
            return b;
        if (b == 0)
            return a;

        // base case
        if (a == b)
            return a;

        // a is greater
        if (a > b)
            return gcd(a - b, b);
        return gcd(a, b - a);
    }

    bool hasGroupsSizeX(vector<int> &a)
    {

        int n = a.size();
        map<int, int> m;
        int mi = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            ++m[a[i]];
        }
        auto prev = m.begin();
        auto i = ++prev;
        --prev;

        for (; i != m.end(); ++i)
        {
            cout << "prev:" << prev->second << " " << i->second << " ";
            mi = min(mi, gcd(prev->second, i->second));
            ++prev;
        }
        cout << mi << " ";

        if (mi != INT_MAX)
        {
            if (mi < 2)
                return false;
        }
        else
        {

            if (prev->second < 2)
                return false;
            else
                return true;
        }

        for (auto i = m.begin(); i != m.end(); ++i)
        {
            cout << " i:" << i->second;
            if ((i->second) % mi != 0)
                return false;
        }
        return true;
    }
};

// second try with few lines of code
// class Solution {

//     public:

//     int gcd(int a, int b)
// {
//     // Everything divides 0
//     if (a == 0)
//        return b;
//     if (b == 0)
//        return a;

//     // base case
//     if (a == b)
//         return a;

//     // a is greater
//     if (a > b)
//         return gcd(a-b, b);
//     return gcd(a, b-a);
// }

//     bool hasGroupsSizeX(vector<int>& a) {

//     int n=a.size();
//         map<int,int> m;
//         int mi=INT_MAX;
//         for(int i=0;i<n;++i)
//         {
//             ++m[a[i]];

//         }
//     int res=0;
//   for(auto i=m.begin() ;i!=m.end();++i)
//   {
//       res=gcd(res,i->second);
//   }

//         return res>1;
//     }

// };