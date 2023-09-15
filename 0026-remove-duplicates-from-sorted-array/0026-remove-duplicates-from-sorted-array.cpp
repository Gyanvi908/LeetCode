class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 1;
        int n =nums.size();
        if(n<=1)return n;
        for(int i=1;i<n;++i){
            if(nums[i] != nums[cnt-1]){
                nums[cnt] = nums[i];
                  cnt++;
            }
          
        }
        return cnt;
    }
};