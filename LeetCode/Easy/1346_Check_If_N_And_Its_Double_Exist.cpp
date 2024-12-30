class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // Iterate through each element in the array
        for(int i = 0; i < arr.size() - 1; i++) {
            // Compare the current element with all subsequent elements
            for(int j = i + 1; j < arr.size(); j++) {
                // Check if one element is double the other
                if(arr[j] * 2 == arr[i] || arr[j] == arr[i] * 2) {
                    return true; // Return true if such a pair is found
                }
            }
        }
        return false; // Return false if no such pair exists
    }
};



//space complexity is O(1)
//time complexity is O(n^2) where n is the size of the array
