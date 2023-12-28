class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> d;
        if(n<3) return d;
        for(int i = 0;i<n;i++)
        {
            int f = nums[i];
            int t = -f;
            int s = i+1, e = n-1;
            while(s<e)
            {
                if(nums[s]+nums[e] == t)
                {
                    d.push_back({nums[i],nums[s],nums[e]});
                    while(s<e && nums[s]==nums[s+1]) s++;
                    while(s<e && nums[e]==nums[e-1]) e--;
                    s++;
                    e--;
                }
                else if(nums[s]+nums[e] > t)
                {
                    e--;
                }
                else
                {
                    s++;
                }
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return d;
    }
};
