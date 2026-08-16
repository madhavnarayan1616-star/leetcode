class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> generatematrix(n, vector<int>(n));
        int srow=0;
        int erow=n-1;
        int scol=0;
        int ecol=n-1;
        int p=1;
        while(scol<=ecol){
        for(int i=scol; i<=ecol; i++){
            generatematrix[srow][i]=p;
            p++;
        }
         srow++;
        for(int i=srow; i<=erow; i++){
            generatematrix[i][ecol]=p;
            p++;
        }
        ecol--;
        for(int i=ecol; i>=scol; i--){
            generatematrix[erow][i]=p;
            p++;
        }
         erow--;
        for(int i=erow; i>=srow; i--){
            generatematrix[i][scol]=p;
            p++;
        }
         scol++;
         }
         return generatematrix;
    }
};