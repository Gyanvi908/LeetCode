typedef pair<int,int> pi;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pi,vector<pi>> st;// max heap
        int cnt=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            while(!st.empty() and (st.top().first<nums[i])) // if nums[i] greater than topmost element of queue then pop
            {
                st.pop();
            }
            while(!st.empty() and i-st.top().second+1>k) // if size of window greater than k then pop
                st.pop();
            st.push({nums[i],i});
            if(i>=k-1) // whenever size greater than equal to k-1 for every window we need to store the maximum
            {
                if(!st.empty())
                {
                    ans.push_back(st.top().first);
                }
                 if(!st.empty() and st.top().second==i-k) // if index is equal to i-k then pop since it is not required for the next window 
                 st.pop();
            }
        }
        return ans;
    }
};