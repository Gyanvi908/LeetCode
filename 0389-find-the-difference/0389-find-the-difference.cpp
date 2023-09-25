class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.length();
        char result = 0;
        for(int i=0;i<n;i++){
            result ^= s[i];
            result ^= t[i];
        }
        result ^= t[n];
        return result;
    }
};