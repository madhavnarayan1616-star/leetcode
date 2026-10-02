class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n);
        k=k%n;
        for(int i=0; i<k; i++){
            ans[i]=nums[n-k+i];
 }
 for(int i=k; i<n; i++){
    ans[i]=nums[i-k];
 }
   nums=ans;
    }
};