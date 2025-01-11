class Solution {
public:
    bool isSubset(string& a, unordered_map<char, int>& requiredFreq) {
        unordered_map<char, int> freqA;

        // Count character frequencies in `a`
        for (char c : a) freqA[c]++;

        // Check if `a` satisfies the frequency requirement
        for (const auto& [key, value] : requiredFreq) {
            if (freqA[key] < value) return false;
        }

        return true;
    }

    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char, int> maxFreq;

        // Combine frequency requirements for all words in `words2`
        for (string& word : words2) {
            unordered_map<char, int> freqB;
            for (char c : word) freqB[c]++;
            for (const auto& [key, value] : freqB) {
                maxFreq[key] = max(maxFreq[key], value);
            }
        }

        vector<string> universal;

        // Check each word in `words1` against the combined frequency map
        for (string& word : words1) {
            if (isSubset(word, maxFreq)) {
                universal.push_back(word);
            }
        }

        return universal;
    }
};

//space complexity is O(n+m)
//time complexity is O(n+m)