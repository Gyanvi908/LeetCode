class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for(auto e : nums){
            if(k==0 || k==1 || nums[k-2]!=e){
                nums[k]=e;
                k+=1;
            }
        }
        return k;
    }
};