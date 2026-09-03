class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(nums[i] + nums[j] == target && i != j){
                    vector<int> sum;
                    sum.push_back(i);
                    sum.push_back(j);
                    return sum;
                }
            }
        }
        return {};
    }
};
