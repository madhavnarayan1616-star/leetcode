class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int a=x;
        long long ans=0;
        while(a!=0){
            int digit=a%10;
            ans=ans*10+digit;
            a=a/10;
        }
        return ans==x;
    }
};