class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> passs;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            for(int j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                }else if(nums[i]>nums[j]){
                    cnt++;
                }
            }
            passs.push_back(cnt);
        }
        return passs;
    }
};