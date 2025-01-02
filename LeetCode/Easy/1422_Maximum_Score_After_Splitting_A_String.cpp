class Solution {
public:
    int maxScore(string s) {
        int s1=0;
        for(int i = 0;i<s.length();i++){
if(s[i]=='1'){
            s1++;
}
        }
if( s1==s.length()) return s1-1;
        int max=0;


for(int i = 0;i<s.length()-1;i++){
        if(s[i]=='0'){
        s1++;
        if (s1>max) max=s1;
        }else{
            s1--;
            if (s1>max) max=s1;
        }
        }
        return max;
    }
};

//space complexity is O(1)
//time complexity is O(n)