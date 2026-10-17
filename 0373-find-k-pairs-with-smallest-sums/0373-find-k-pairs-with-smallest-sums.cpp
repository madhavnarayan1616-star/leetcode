class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>ans;
        int n=nums1.size();
        int m=nums2.size();
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq;

        for(int i=0; i<k && i<n; i++){
            pq.push({nums1[i]+nums2[0],{i,0}});
        }
        vector<vector<int>>finalans;
        while(k>0 && !pq.empty()){
            auto top=pq.top();
            pq.pop();
            int i=top.second.first;
            int j=top.second.second;
            finalans.push_back({nums1[i],nums2[j]});
            k--;
            if(j+1<m)
            pq.push({nums1[i]+nums2[j+1],{i,j+1}});
        }
        return finalans;
    }
};