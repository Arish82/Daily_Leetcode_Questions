class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(),nums.end());
//         7 6 5 4 3 2 1
        reverse(nums.begin(),nums.begin()+k);
        // 5 6 7 4 3 2 1
        reverse(nums.begin()+k,nums.end());
        return nums;
    }
};