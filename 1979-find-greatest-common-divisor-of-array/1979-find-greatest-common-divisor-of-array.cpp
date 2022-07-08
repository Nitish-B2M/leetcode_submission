class Solution {
public:
 
int findGCD(vector<int> nums)
{
    int maximum = *max_element(nums.begin(),nums.end());
        int minimum = *min_element(nums.begin(),nums.end());
        return __gcd(maximum,minimum);
}
};