class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Iterate through each element in the array
        for (int i = 0; i < nums.size(); i++) {
            // Iterate through the next elements to find the pair
            for (int j = i + 1; j < nums.size(); j++) {
                // If the sum of the current pair equals the target, return their indices
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return{};
    }
};

//space complexity is O(1)
//time complexity is O(n²)
