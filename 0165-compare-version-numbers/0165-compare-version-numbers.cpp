class Solution {
public:
    vector<string> split(string a) {
        vector<string> v;
        int i = 0;
        while (i < a.size()) {
            string word = "";
            while (i < a.size() && a[i] != '.') {
                word.push_back(a[i]);
                i++;
            }
            v.push_back(word);
            i++;
        }
        return v;
    }
    int compareVersion(string version1, string version2) {
        vector<string> arr1 = split(version1);
        vector<string> arr2 = split(version2);
        int i = 0;
        while (i < arr1.size() || i < arr2.size()) {
            int rev1 = 0;
            int rev2 = 0;
            if (i < arr1.size())
                rev1 = stoi(arr1[i]);
            if (i < arr2.size())
                rev2 = stoi(arr2[i]);
            if (rev1 > rev2)
                return 1;
            else if (rev1 < rev2)
                return -1;
            i++;
        }
        return 0;
    }
};