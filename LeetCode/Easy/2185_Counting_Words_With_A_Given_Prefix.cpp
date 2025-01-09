class Solution {
    bool isPrefix(string a, string b){
    return (b.size() >= a.size() && b.compare(0, a.size(), a) == 0);
}
public:
    int prefixCount(vector<string>& words, string pref) {
        int s=0;
        for(int i=0;i<words.size();i++){
                if(isPrefix(pref, words[i])){
                    s++;
                }
            
        }
        return s;
    }
};

//space complexity is O(1)
//time complexity is O(N)