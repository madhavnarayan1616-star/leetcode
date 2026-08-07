class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int size=m*n;
        vector<int>v(size);
        int s=0;
        int e=size-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(target==matrix[mid/m][mid%m]){
                return true;
            }
            else if(target < matrix[mid/m][mid%m]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return false;
    }
};