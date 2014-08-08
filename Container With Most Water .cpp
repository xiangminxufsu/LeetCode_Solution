class Solution {
public:
    int maxArea(vector<int> &height) {
        int n = height.size();
        int ans=0;
        int i=0;
        int j=n-1;
        for(i=0;i<j;)
        {
            int temAns=min(height[i],height[j])*(j-i);
            ans = max(ans,temAns);
            if(height[i]<height[j])
            {
                ++i;
            }
            else
            {
                --j;
            }
        }
        return ans;
        
    }
};