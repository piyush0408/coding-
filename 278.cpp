// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// its a binary search question

class Solution
{
public:
    int firstBadVersion(int n)
    {

        int start = 1, end = n;
        int ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (isBadVersion(mid) == false)
            {

                start = mid + 1;
            }
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }
        if (ans == -1)
            return start;
        else
            return ans;
    }
};