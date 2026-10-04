class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       
        int len = nums.size();
        vector<int> left = {1};
        int right = 1;
        for(int i=0;i<len;i++){
            left.push_back(left[i]*nums[i]); // left[1, 1*nums[0], 1*nums[0]*nums[1], 2, 3]
                                             // left[R, 0, 0x1, 0x1x2, 0x1x2x3]
                                             // right[          0x1x2x4x5,0x1x2x3x5]
        }
        for(int j=len;j>0;j--){
            left[j] = left[j-1] * right;
            right = right * nums[j-1];
        }
        
        return vector<int>(left.begin()+1, left.end());
    }
};
