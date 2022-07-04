class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int temp=arr[0],ind=0;
        for(int i=0;i<arr.size();i++){
            if(temp<arr[i]){
                temp=arr[i];
                ind=i;
            }
        }
        return ind;
    }
};