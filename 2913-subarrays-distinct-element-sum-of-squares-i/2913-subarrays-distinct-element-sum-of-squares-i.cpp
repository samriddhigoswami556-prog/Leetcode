class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            unordered_set<int> set;
            for (int j = i; j < nums.size(); j++) {
                set.insert(nums[j]);
                int size = set.size();
                sum += size * size;
            }
        }
        return sum;
    }
};