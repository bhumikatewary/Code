class Solution {
public:
    int maxArea(vector<int>& height) {
       int length = height.size();
        int i=0;
        int j= height.size()-1;
        
        int maximum=0;
        while(i<j){
            int width = j-i;
            int h = min(height[i], height[j]);
            int area = width * h;
            
            maximum = max(maximum,area);
            if(height[i]<height[j]) i++;
            else if (height[j]<height[i]) j--;
            else {
                i++;
                j--;
            }
        }
        return maximum;
    }
};
