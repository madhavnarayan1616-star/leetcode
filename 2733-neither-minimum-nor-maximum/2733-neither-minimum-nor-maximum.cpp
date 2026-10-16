class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
        return -1;
        sort(nums.begin(),nums.end());
        return nums[1];
    }
};