class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = target - nums[i];
            if (mp.find(sum) != mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[sum]);
                break;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};