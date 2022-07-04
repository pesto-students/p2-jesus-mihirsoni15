class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            nums[abs(nums[i]) - 1] = -1*abs(nums[abs(nums[i]) - 1]); // Negate all indices whose values exist in nums
        }

        vector<int> temp;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {temp.push_back(i + 1);} // Check which indices are not negated
        }
        return temp;
    }
};