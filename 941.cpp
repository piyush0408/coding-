class Solution
{
public:
    bool validMountainArray(vector<int> &a)
    {

        // bool dec=false;
        int n = a.size();
        if (n < 3)
            return false;
        int i = 0, j = n - 1;
        while (i + 1 <= n - 1 && a[i + 1] > a[i])
        {
            ++i;
        }
        if (i == n - 1)
            return false;
        while (j - 1 >= 0 && a[j - 1] > a[j])
        {
            --j;
        }
        if (i == j && i != 0 && j != n - 1)
            return true;
        return false;
    }
};

// first approach
// class Solution {
// public:
//     bool validMountainArray(vector<int>& a) {

//   // bool dec=false;
//         int n=a.size();
//         if(n<3)
//             return false;
//         int i=1;
//         bool inc=false;
//       while(i<n&&a[i]>a[i-1])
//       {
//           ++i;
//          inc=true;
//       }
//         if(i==n||a[i]==a[i-1])
//             return false;
//      while(i+1<=n-1&&a[i+1]<a[i])
//      {
//          ++i;
//      }
//     if(i==n-1&&inc)
//         return true;
//     return false;

//     }
// };