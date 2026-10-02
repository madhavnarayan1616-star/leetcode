class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int Psum=0;
        int Ssum=0;
        int n=mat.size();
        //primary diagonal sum
        int i=0;
        while(i<n){
            Psum=Psum+mat[i][i];
            i++;
        }
        int j=n-1;
        while(j>=0){
            if(n-j-1!=j)
            Ssum=Ssum+mat[n-j-1][j];
            j--;
        }
        return Ssum+Psum;
    }
};