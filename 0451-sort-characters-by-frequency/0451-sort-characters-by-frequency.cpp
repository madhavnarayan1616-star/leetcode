class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto p:mp){
            pq.push({p.second,p.first});
        }
        string ans="";
        while(!pq.empty()){
            auto a=pq.top();
            pq.pop();
            for(int i=0; i<a.first; i++){
                ans+=a.second;
            }
        }
        return ans;
    }
};