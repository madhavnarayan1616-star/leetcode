class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        for(int j=0; j<k; j++){
            sum=sum+nums[j];
        }
        double maxsum=sum;
        double maxi=sum;
        for(int i=k; i<n; i++){
            maxsum=maxsum-nums[i-k]+nums[i];
            maxi=max(maxsum,maxi);
        }
        return maxi/k;
    }
};