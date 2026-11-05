class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        int left_sum=0;
        int right_sum=0;
        for(int x:nums){
            total+=x;
        }
        for(int i=0;i<nums.size();i++){
            right_sum=total-left_sum-nums[i];
            if(right_sum==left_sum)
            return i;
            left_sum+=nums[i];
        }
        return -1;
    }
};
