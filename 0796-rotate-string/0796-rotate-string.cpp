class Solution {
public:
    string rotate(string s,int k){
        int n=s.length();
        string r;
        for(int i=k; i<n; i++){
            r.push_back(s[i]);
        }
        for(int i=0; i<k; i++){
            r.push_back(s[i]);
        }
        return r;
    }
    bool rotateString(string s, string goal) {
        for(int i=0; i<s.length(); i++){
            string r =rotate(s,i);
            if(r==goal){
            return true;
            break;
            }
        }
        return false;
    }
};