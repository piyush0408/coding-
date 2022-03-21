class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        //         if(k==0)

        //             return false;

        map<int, int> m;
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            if (m[nums[i]] != 0) // checking that number is present or not;
            {
                if ((i + 1) - m[nums[i]] <= k)
                    return true;
            }

            {
                // cout<<nums[i]<<" "<<m[nums[i]]<<" "<<i;

                m[nums[i]] = i + 1; // we are storing that at which last position it was can't store 0 position because we cant deifferentiate if its presetn or not with zero value;
            }
        }

        return false;
    }
};