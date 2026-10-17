class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int>mp;
        for(int i=0; i<score.size(); i++){
            mp[score[i]]=i;
        }
        priority_queue<int>pq;
        for(int i=0; i<score.size(); i++){
            pq.push(score[i]);
        }
        vector<string>ans(score.size());
        int j=0;
        while(!pq.empty()){
            int top=pq.top();
            pq.pop();
            int a=mp[top];
            if(j==0)
            ans[a]="Gold Medal";
            else if(j==1)
            ans[a]="Silver Medal";
            else if(j==2)
            ans[a]="Bronze Medal";
            else
            ans[a]= to_string(j+1);
            j++;
        }
        return ans;
    }
};