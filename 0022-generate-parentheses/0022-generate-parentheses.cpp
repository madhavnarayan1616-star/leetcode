class Solution {
public:
    void solve(int n,int i,int j,string s,vector<string>&ans){
        if(s.length()==2*n){
        ans.push_back(s);
        return;
        }
        if(i<n){
            s.push_back('(');
            solve(n,i+1,j,s,ans);
            s.pop_back();
        }
        if(j<i){
            s.push_back(')');
            solve(n,i,j+1,s,ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string>ans;
        solve(n,0,0,s,ans);
        return ans;
    }
};