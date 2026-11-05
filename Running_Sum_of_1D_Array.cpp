class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int>list1;
        for(int i=0;i<nums.size();i++){
            int current=0;
            for(int j=0;j<i+1;j++){
                current=current+nums[j];
            }
            list1.push_back(current);
        }
        return list1;
    }
};
