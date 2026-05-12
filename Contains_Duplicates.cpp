# include<iostream>
# include<vector>
# include<unordered_set>

using namespace std;

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