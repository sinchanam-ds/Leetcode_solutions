class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>new_nums;
        for(int x:nums){
            if(new_nums.find(x) !=new_nums.end()){
                return true;
            }
            new_nums.insert(x);
        }
        return false;
    }
};
