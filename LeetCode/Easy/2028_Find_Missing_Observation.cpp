class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sm=0;
        
        for(int i=0;i<rolls.size();i++){
            sm+=rolls[i];
        }
        int sn=mean*(rolls.size()+n)-sm;
        if (((static_cast<float>(sn) / 6) > n)||(sn/n<1)) {
    return {};
}
        
        vector<int> result;
        for(int i=0;i<n;i++){
            result.push_back(sn/n);
        }
        for(int i=0;i<(sn%n);i++){
            result.at(i)=(sn/n)+1;
}
        return result;
    
    }
};

//space complexity is O(n)
//time complexity is O(n)