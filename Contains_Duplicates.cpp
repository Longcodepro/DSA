# include<iostream>
# include<vector>
# include<unordered_set>

using namespace std;
/*
    Kiểm tra sự trùng lặp của một số trong vector
*/

class Solution
{
    public:
        bool containsDuplicate(vector<int> nums)
        {
            // chuyển sang multiset
            unordered_set<int> setNums (nums.begin(), nums.end());
            
            // check duplicate
            return nums.size() > setNums.size();
        }
};

int main()
{
    Solution l;
    vector<int> nums = {2, 2, 3, 4};
    cout<<l.containsDuplicate(nums)<<endl;
}