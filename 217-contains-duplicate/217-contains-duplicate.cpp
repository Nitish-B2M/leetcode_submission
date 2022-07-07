class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> intSet;
    for (int i = 0; i < nums.size(); i++)
    {
        if (intSet.find(nums[i]) == intSet.end())
            intSet.insert(nums[i]);
        else
            return true;
    }
        return false;
    }
};