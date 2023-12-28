class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int i = 0, j = height.size() - 1, maxi = 0;
        while(i < j)
        {
            if(height[i] < height[j])
                maxi = max(maxi, (j - i) * height[i++]);
            else
                maxi = max(maxi, (j - i) * height[j--]);
        }
        return maxi;
    }
};
