class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long long rev = 0;
        if (x < 0) return false;
        while (x > 0) {
            int ld = x % 10;
            rev = rev * 10 + ld;
            x /= 10;
        }

        /*This method is suitable when we are checking paliondrome for a given string.
        vector<int>v;
        while(x!=0){
            v.push_back(x%10);
            x/=10;
        }
        bool check=0;
        for(int i=0 ;i <v.size()/2; i++){
            if(v[i]!=v[v.size()-i-1]){check=1;}
        }
        */

        if (rev == n) return true;

        else return false;
    }
