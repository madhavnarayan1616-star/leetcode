class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int b=0;
       int maxi=0;
       int n=prices.size();
       for(int i=1; i<n; i++){
        if(prices[i]<prices[b]){
            b=i;
        }
        else{
            int profit=prices[i]-prices[b];
        maxi=max(profit,maxi);
        }
            }
       return maxi;
    }
};