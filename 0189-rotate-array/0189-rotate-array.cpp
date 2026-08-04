class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==0) return;
        k = k % nums.size();
        vector<int>v(nums.size()); 
        for(int i=0; i<k; i++){
            v[i]=nums[nums.size()-k+i];
        }
        for(int i=k; i<nums.size(); i++){
            v[i]=nums[i-k];
        }
        for(int x=0; x<nums.size(); x++){
            nums[x]=v[x];
        }
    }
};