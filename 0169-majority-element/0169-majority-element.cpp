class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
         sort(arr.begin(), arr.end());
         return arr[n/2];
    }
};