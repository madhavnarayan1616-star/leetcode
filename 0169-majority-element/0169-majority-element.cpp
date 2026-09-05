class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int s=0;
        int e=n-1;
        int m=s+(e-s)/2;
        return nums[m];
          }
};