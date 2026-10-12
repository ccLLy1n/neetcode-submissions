class Solution {
public:
    int maxArea(vector<int>& heights) {
        int len = heights.size();
        int j = len-1;
        int h = 0;
        int area = 0;
        bool bigger = true; // i>j=true; i<j=false
        int i = 0;
        while(i<j)
        {
            if(heights[i]>=heights[j]){
                h = heights[j];
                bigger = false;
            }
            else{
                h = heights[i];
                bigger = true;
            }
            int w = j-i;
            int temp_area = h*w;
            if(area < temp_area){
                area = temp_area;
            }
            if(bigger == false){
                j--;
            }
            else{
                i++;
            }
        }
        return area;
    }
};
