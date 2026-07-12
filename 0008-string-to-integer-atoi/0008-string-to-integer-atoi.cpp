class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        bool neg = false;
        long long ans = 0;
        while (s[i] == ' ' && i < s.size()) {
            i++;
        }
        if (i < s.size() && s[i] == '+') {
            i++;
        } else if (i < s.size() && s[i] == '-') {
            neg = true;
            i++;
        }
        while (i < s.size() && s[i] == '0')
            i++;
        while (i < s.size() && isdigit(s[i])) {
            if (ans > INT_MAX)
                break;
            ans = ans * 10 + (s[i] - '0');
            i++;
        }
        if (neg) {
            ans = -ans;
        }
        if (ans > INT_MAX)
            return INT_MAX;
        else if (ans < INT_MIN)
            return INT_MIN;
        return (int)ans;
    }
};