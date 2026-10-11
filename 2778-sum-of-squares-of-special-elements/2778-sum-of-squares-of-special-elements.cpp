class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
       int n=nums.size();
       int sum=0;
       int i=0;
       while(i<n){
        if(n%(i+1)==0){
            sum=sum+(nums[i]*nums[i]);
        }
        i++;
       } 
       return sum;
    }
};