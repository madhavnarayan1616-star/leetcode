class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0;
        int count=0;
        int maxi=0;
        for(int j=0; j<s.size(); j++){
            if(mp.find(s[j])!=mp.end())
            i=max(i,mp[s[j]]+1);
            mp[s[j]]=j;
            count=j-i+1;
            maxi=max(maxi,count);
        }
        return maxi;   
    }
};