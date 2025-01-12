class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (i == j) continue;
                if (words[j].find(words[i]) != string::npos) {
                    result.push_back(words[i]);
                    break;
                }
            }
        }

        return result;
    }
};

//space complexity is O(n)
//time complexity is O(n²)