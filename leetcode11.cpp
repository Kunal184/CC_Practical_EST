class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int maxArea = 0;
        int area;
        while(l<r){
            area = min(height[l], height[r])*(r-l);
            if(height[l]>=height[r]) r--;
            else l++;
            maxArea = max(area, maxArea);


        }
        return maxArea;
    }
};
