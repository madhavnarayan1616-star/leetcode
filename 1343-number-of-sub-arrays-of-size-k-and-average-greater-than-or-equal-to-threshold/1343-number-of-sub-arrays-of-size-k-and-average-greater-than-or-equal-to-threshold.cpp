class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0;
        for(int i=0; i<k; i++){
            sum=sum+arr[i];
        }
        int count=0;
        int avgsum=sum;
        if(avgsum>=k*threshold)
            count++;
        for(int i=k; i<n; i++){
            avgsum=avgsum-arr[i-k]+arr[i];
            if(avgsum>=k*threshold)
            count++;
        }
        return count;
    }
};