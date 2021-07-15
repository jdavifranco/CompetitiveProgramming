class Solution {
public:
    int Max(int x, int y){
        return x>y ? x:y;
    }
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int i, sum=-100009;
        int maxima=-1000000;
        for(i=0;i<n;i++){
            sum=Max(nums[i], sum+nums[i]);
            if(sum>maxima){
                maxima=sum;
            }
        }
        return maxima;
    }
};