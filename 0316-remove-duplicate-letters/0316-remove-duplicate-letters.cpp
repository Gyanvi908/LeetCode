class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans;
        unordered_map<char,int> mp;
        stack<char> st;
        unordered_set<char>sett;
        for(char&i:s) mp[i]++;
        for(char&i :s) {
            if(sett.count(i)) {
                mp[i]--; // already in stack no use now
                continue;
            }
            while(!st.empty() && st.top() > i && mp[st.top()] > 1) {
                char ch = st.top();
                st.pop();
                sett.erase(ch);
                mp[ch]--;
            }
            
            st.push(i);
            sett.insert(i);
        }
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};