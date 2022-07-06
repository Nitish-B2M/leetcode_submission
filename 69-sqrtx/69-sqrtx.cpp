class Solution {
public:
    int mySqrt(int x) {
        long long int s=0,e=x;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
            long long int t=mid*mid;
            if(t==x){
                return mid;
            }
            if(t>x){
                e=mid-1;
            }else{
                s=mid+1;
                ans=mid;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};