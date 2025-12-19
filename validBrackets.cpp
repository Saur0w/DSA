#include <iostream>
#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char current = s[i];

            if (current == '(' || current == '{' || current == '[') {
                st.push(current);
            } else {
                if (st.empty()) return false;

                char top = st.top();

                if ((current == ')' && top == '(') ||
                    (current == '}' && top == '{') ||
                    (current == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main() {
    Solution obj;
    std::cout << obj.isValid("{(()})])}") << std::endl;
    return 0;
}