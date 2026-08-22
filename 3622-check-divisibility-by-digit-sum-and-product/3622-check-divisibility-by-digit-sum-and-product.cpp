class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int digit=0;
        int original=n;
        while(n!=0){
            digit=n%10;
            sum=sum+digit;
            product=product*digit;
            n=n/10;
        }
        int finalsum=sum+product;
        if(original%finalsum==0){
            return true;
        }
        return false;
        
    }
};