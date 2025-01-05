class Solution {
public:
    bool hasMatch(string s, string p) {
        // Check if pattern contains only '*'
        if (p == "*") return true;
        if(p[0]=='*' && s.find(p.substr(1))!=string::npos) return true;
        if(p[p.length()]=='*' && s.find(p.substr(0,p.length()))!=string::npos) return true;


        // Find the left part in the string
        size_t leftIndex = s.find(p.substr(0, p.find('*')));
        if (leftIndex == string::npos) return false;   // Left part not found

        // Ensure the right part appears after the left part
        return  ((s.find( p.substr(p.find('*') + 1), leftIndex + p.substr(0, p.find('*')).length()))!=string::npos);
    }
};


//space complexity is O(1)
//time complexity is O(N∗M)



