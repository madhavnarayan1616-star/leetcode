class Solution {
public:
    vector<double> distance(vector<vector<int>>& points){
        vector<double>ans;
        for(int i=0; i<points.size(); i++){
            int x=points[i][0];
            int y=points[i][1];
            ans.push_back(sqrt(x*x + y*y));
        }
        return ans;    
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<double>ans=distance(points);
        priority_queue<pair<double,vector<int>>,vector<pair<double,vector<int>>>,greater<pair<double,vector<int>>>>pq;
        for(int i=0; i<ans.size(); i++){
            pq.push({ans[i],points[i]});
        }
        vector<vector<int>>finalAns;
        while(k--){
            finalAns.push_back(pq.top().second);
            pq.pop();    
        }
        return finalAns;
    }
};