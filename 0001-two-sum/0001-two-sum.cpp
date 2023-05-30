class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr(2);
        for (int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    if(i!=j)
                    {
                        arr[0]=i;
                        arr[1]=j;
                        // cout<<i<<" "<<j<<endl;
                    }
                }
            }
        }
        
        return arr;
    }
};