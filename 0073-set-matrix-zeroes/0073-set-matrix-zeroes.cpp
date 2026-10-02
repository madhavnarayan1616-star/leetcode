class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans[i][j]=matrix[i][j];
            }
            }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    for(int k=0; k<n; k++){
                        ans[k][j]=0;
                    }
                    for(int o=0; o<m; o++){
                        ans[i][o]=0;
                    }
                }
            }
        }
        matrix=ans;     
    }
};