class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]==9){
            
            for(int i=digits.size()-1;i>=0;i--){

            if(digits[i]==9){
                digits[i]=0;
                
            }else{
                digits[i]+=1;
                break;
            }
        }
        if(digits[0]==0){
            digits.insert(digits.begin(), 1);
        }
        }else{
            digits[digits.size()-1]+=1;
        }
        
        return digits;
        
    }
};

//space complexity is O(1)
//time complexity is O(n)