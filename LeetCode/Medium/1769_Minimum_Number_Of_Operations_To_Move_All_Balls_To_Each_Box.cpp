class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> left(n,0);
        int op = 0;
        int balls = 0;
        for(int i=0;i<n;i++){
            left[i] = op;
            if(boxes[i] == '1') balls++;
            op += balls;
        }
        vector<int> right(n,0);
        op = 0;
        balls = 0;
        for(int i=n-1;i>=0;i--){
            right[i] = op;
            if(boxes[i] == '1') balls++;
            op += balls;
        }

        vector<int> res(n,0);
        for(int i=0;i<n;i++) res[i] = left[i]+right[i];
        return res;
    }
};
//space complexity is O(n)
//time complexity is O(n)