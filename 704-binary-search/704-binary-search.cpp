class Solution {
public:
    int search(vector<int>& nums, int ele) {
        int start_index=0,end_index=nums.size()-1;
        int midpoint_index=start_index+(end_index-start_index)/2;
        while (start_index<=end_index)
        {
            if(nums[midpoint_index]==ele){
                return midpoint_index;
            }
            if(nums[midpoint_index]<ele){
                start_index=midpoint_index+1;
            }else{
                end_index=midpoint_index-1;
            }
            midpoint_index=start_index+(end_index-start_index)/2;
        }
        return -1;
    }
};