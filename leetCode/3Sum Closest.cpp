class Solution {
public:
    int minDist(int sum, int closest, int target){
        if(abs(sum-target)<abs(closest-target)){
            return sum;
        }
        return closest;
    }
    
    int threeSumClosest(vector<int>& nums, int target) {
        int i, j, k;
        int n=nums.size();
        int sum=0;
        int closest=100000000;
        sort(nums.begin(), nums.end());
        for(i=0;i<n-1;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                j=i+1;
                k=n-1;
                while(j<k){
                    sum=nums[i]+nums[j]+nums[k];
                    if(sum==target){
                        return sum;
                    }
                    else if(sum>target){
                        k--; 
                    }
                    else{
                        j++;
                    }
                    closest=minDist(sum, closest, target);
                }
            }
        }
        return closest;
    }
};