#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool r;
        int k = nums.size();
        unordered_set<int> seen;
        for(int i=0; i<k; i++){
            if(seen.count(nums[i]) == 1){
                r = true;
                return r;            
            }
            else{
                seen.insert(nums[i]);
            }
        }
        r = false; 
        return r;
    }
};

// int main(){
//     vector<int> a;
//     Solution ss;
//     bool b;
//     b = ss.hasDuplicate(a);
//     cout << b << endl;
// }