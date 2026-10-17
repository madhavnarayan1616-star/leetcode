class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(int i=0; i<gifts.size(); i++){
            pq.push(gifts[i]);
        }
        while(k-- >0){
            int top=pq.top();
            pq.pop();
            pq.push(sqrt(top));
        }
        long long sum=0;
        while(!pq.empty()){
            int top=pq.top();
            sum=sum+top;
            pq.pop();
        }
        return sum;
    }
};