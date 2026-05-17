# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
class Solution
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;
            for(int index = 0; index < nums.size(); index++)
            {
                if(find(nums.begin() + index + 1, nums.end(), target-nums[index]) != nums.end())
                {
                    result.push_back(index);
                    auto it = find(nums.begin() + index + 1, nums.end(), target-nums[index]);
                    result.push_back(it - nums.begin());
                    return result;
                }
            }
            return result;
        }
};

int main()
{
    vector<int> nums = {4, 2, 3, 4};
    Solution l;
    vector<int> result = l.twoSum(nums, 5);
    if(!result.empty())
    {
        cout<<result[0]<<" "<<result[1]<<endl;
    }
}