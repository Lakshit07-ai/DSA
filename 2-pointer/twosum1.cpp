// 1st approach that is correct but not according to the leetcode test case


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i =0;
        int j = nums.size() - 1;
        while(i<j){
            int sum =nums[i] + nums[j]; 
            if (sum < target){
                i++;
            }
            else if (sum > target){
                j--;
            }
            else{
                return {i,j};
            }
        }
        return {};
    }

};