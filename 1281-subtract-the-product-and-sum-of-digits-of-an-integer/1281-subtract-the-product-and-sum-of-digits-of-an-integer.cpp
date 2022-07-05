class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0;
        while(n!=0){
            int num=n%10;
            sum+=num;
            product=product*num;
            n/=10;
        }
    return product-sum;
    }
};