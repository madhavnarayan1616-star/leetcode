class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int ans=nums[0];
        int mini=nums[0];
        for(int i=1; i<nums.size(); i++){
            int tempmax=max(nums[i],max(maxi*nums[i],mini*nums[i]));
            int tempmin=min(nums[i],min(maxi*nums[i],mini*nums[i]));
            maxi=tempmax;
            mini=tempmin;
            ans=max(maxi,ans);
        }
        return ans;
    }
};