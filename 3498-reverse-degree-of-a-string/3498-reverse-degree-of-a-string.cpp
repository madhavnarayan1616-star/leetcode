class Solution {
public:
    int reverseDegree(string s) {
        vector<int>ans(s.size());
        for(int i=0; i<s.size(); i++){
            ans[i]=(i+1)*(26-(s[i]-'a'));
        }
        int sum=0;
        for(int i=0; i<ans.size(); i++){
            sum=sum+ans[i];
        }
        return sum;   
    }
};