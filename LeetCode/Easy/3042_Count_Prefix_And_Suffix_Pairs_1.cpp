class Solution {
public:
bool isPrefixAndSuffix(string a, string b){
    return (b.size() >= a.size() && b.compare(0, a.size(), a) == 0) && (b.size() >= a.size() &&
           b.compare(b.size() - a.size(), a.size(), a) == 0);
}
    int countPrefixSuffixPairs(vector<string>& words) {
        int s=0;
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                if(isPrefixAndSuffix(words[i], words[j])){
                    s++;
                }
            }
        }
        return s;
    }
};

//space complexity is O(1)
//time complexity is O(N²)