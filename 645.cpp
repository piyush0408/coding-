
// negation indexing i have done this question many times and i still forget it

class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {

        int cnt = 1;
        int n = nums.size();
        int x, y;
        //         map<int,int> m;
        //         for(int i=0;i<n;++i)
        //         {
        //           ++m[nums[i]];
        //             if(m[nums[i]]==2)
        //                 x=nums[i];

        //         }

        //         for(int i=1;i<=n;++i)
        //         {
        //             if(m[i]==0)
        //                 y=i;
        //         }

        for (int i = 0; i < n; ++i)
        {
            if (nums[abs(nums[i]) - 1] < 0)
                x = abs(nums[i]);
            else
                nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
        }
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] > 0)
                y = i + 1;
        }

        return {x, y};
    }
};