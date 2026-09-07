class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>s;
        vector<int>ans(n);
        s.push(-1);
        for(int i=n-1; i>=0; i--){
            int curr=nums2[i];
            while(s.top()!=-1 && s.top()<=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(curr);
            }
               unordered_map<int, int> mp;
               for(int i=0; i<n; i++){
                mp[nums2[i]]=ans[i];
               }   
               vector<int>v(nums1.size());
               for(int i=0; i<nums1.size(); i++){
                v[i]=mp[nums1[i]];
               }  
               return v;
    }
};