#include <iostream>
using namespace std;


class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0)
            return false;
        
        // bubble sort
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = 0; j < nums.size()-1; j++){
                if(nums[j] > nums[j+1])
                    swap(nums[j+1], nums[j]);
            }
        }
        for (int i = 0; i < nums.size(); i ++){
            if(nums[i] == nums[i+1]){
                return true;
            } 
        }
        return false;
    }
};