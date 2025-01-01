#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> mystack; 

        for (int i = 0; i < s.length(); i++) {
            switch (s[i]) {
                case '[':
                case '(':
                case '{':
                    mystack.push(s[i]); // Push opening brackets to the stack
                    break;

                case ')':
                    if (mystack.empty() || mystack.top() != '(') return false; // Check matching pair
                    mystack.pop(); // Remove matched opening bracket
                    break;

                case ']':
                    if (mystack.empty() || mystack.top() != '[') return false; // Check matching pair
                    mystack.pop(); // Remove matched opening bracket
                    break;

                case '}':
                    if (mystack.empty() || mystack.top() != '{') return false; // Check matching pair
                    mystack.pop(); // Remove matched opening bracket
                    break;

                default:
                    return false; // Invalid character found
            }
        }

        return mystack.empty(); // Stack should be empty if all brackets are matched
    }
};


//space complexity is O(n)
//time complexity is O(n)