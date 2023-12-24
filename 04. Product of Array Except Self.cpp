class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size()==0)
            return nums;
        vector<int> res(nums.size());
        int rp = 1;
        for(int i = 0;i<nums.size();i++)
        {
            res[i] = rp;
            rp = rp * nums[i];  
        }
        rp = 1;
        for(int i = nums.size() - 1;i>=0;i--)
        {
            res[i] = res[i] * rp;;
            rp = rp * nums[i];  
        }
        return res;

    }
};
