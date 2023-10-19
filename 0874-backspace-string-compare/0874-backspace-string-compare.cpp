class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i,j,k,l,n1,n2;
        n1 = s.length();n2 = t.length();
        stack<char>st1,st2;
        for(int i=0;i<n1;i++){
            if(s[i]=='#' and !st1.empty())
                st1.pop();
            else if(s[i] != '#')
                st1.push(s[i]);
        }
        for(int i=0;i<n2;i++){
            if(t[i]=='#' and !st2.empty())
                st2.pop();
            else if(t[i] != '#')
                st2.push(t[i]);
        }
        if(st1==st2)return 1;
        return 0;
        
    }
};