class Solution {
public:
    int compareVersion(string ver1, string ver2) {
        int i = 0, j = 0;
        int n = ver1.size();
        int m = ver2.size();
        while (i < n || j < m) {
            int rev1 = 0;
            int rev2 = 0;
            while (i < n && ver1[i] != '.') {
                rev1 = rev1 * 10 + (ver1[i] - '0');
                i++;
            }
            while (j < m && ver2[j] != '.') {
                rev2 = rev2 * 10 + (ver2[j] - '0');
                j++;
            }
            if (rev1 > rev2)
                return 1;
            else if (rev1 < rev2)
                return -1;
            i++;
            j++;
        }
        return 0;
    }
};