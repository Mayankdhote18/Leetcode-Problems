class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0, result = 0;
        for (int num : nums) {
            if (num == 0) {
                count++;
            } else {
                result += (count * (count + 1)) / 2;
                count = 0;
            }
        }
        result += (count * (count + 1)) / 2;
        return result;
    }
};
