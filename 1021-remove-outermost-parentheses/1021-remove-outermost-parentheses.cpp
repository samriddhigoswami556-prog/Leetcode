class Solution {
public:
    string removeOuterParentheses(string s) {
        int i = 0;
        stack<char> st;
        // vector<string> v;
        string ans = "";
        while (i < s.size()) {
            string x = "";
            if (s[i] == '(') {
                x += s[i];
                st.push(s[i]);
                i++;
                while (!st.empty()) {
                    if (s[i] == '(') {
                        x += s[i];
                        st.push(s[i]);
                    } else {
                        x += s[i];
                        st.pop();
                    }
                    i++;
                }
                int n = x.size();
                ans += x.substr(1, n - 2);
                x = "";
            }
        }
        // string ans = "";
        // for (int i = 0; i < v.size(); i++) {
        //     int n = v[i].size();
        //     ans += v[i].substr(1, n - 2);
        // }
        return ans;
    }
};