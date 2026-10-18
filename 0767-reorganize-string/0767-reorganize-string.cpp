class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        for(auto p:mp){
            if(p.second>(n+1)/2)
            return "";
        }
        priority_queue<pair<int,char>>pq;
        for(auto p:mp){
            pq.push({p.second,p.first});
        }
        string ans="";
        while(pq.size()>=2){
            auto a=pq.top();
            pq.pop();
            auto b=pq.top();
            pq.pop();
            ans=ans+a.second;
            ans=ans+b.second;
            a.first--;
            b.first--;
            if(a.first>0)
            pq.push(a);
            if(b.first>0)
            pq.push(b);
        }
        if(!pq.empty())
        ans+=pq.top().second;
        return ans;
    }
};