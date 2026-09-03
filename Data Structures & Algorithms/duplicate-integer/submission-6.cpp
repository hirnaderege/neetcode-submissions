class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        stable_sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
};
