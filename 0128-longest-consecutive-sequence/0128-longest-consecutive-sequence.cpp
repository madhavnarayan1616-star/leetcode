class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        int n=nums.size();
        int count=1;
        if(n==0)
        return 0;
        for(int i=0; i<n-1; i++){
            if(nums[i+1]==nums[i]+1)
            count++;
            else if(nums[i+1]==nums[i])
            continue;
            else
            count=1;
            maxi=max(count,maxi);
        }
        return max(count,maxi);
    }
};