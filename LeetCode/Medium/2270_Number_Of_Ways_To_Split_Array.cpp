class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long int sumr=0;
        long int suml=nums[0];
        int valid=0;
        for(int i=1;i<nums.size();i++){
            sumr+=nums[i];
        }
        if(suml>=sumr){
                valid++;
        }
        for(int i=1;i<nums.size()-1;i++){
            suml+=nums[i];
            sumr-=nums[i];
            if(suml>=sumr){
                valid++;
            }
        }
        return valid;
    }
};


//space complexity is O(1)
//time complexity is O(n)