class Solution {
public:
    int countHomogenous(string s) {
        int prev = 0;
        long long res = 0;
        for(int x=0; x<s.size(); x++) {
            if(s[x] == s[prev]) res = res + x - prev + 1;
            else {
                res += 1;
                prev = x;
            }
        }
        return res % (1000000007);
    }
};