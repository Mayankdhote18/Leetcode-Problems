class Solution {
public:
    
    string digitCount(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());
        return s;
    }
    
    bool reorderedPowerOf2(int n) {
        string target = digitCount(n);
    
        for (int i = 0; i <= 30; ++i) {
            int power = 1 << i;
            if (digitCount(power) == target) {
                return true;
            }
        }
        return false;
    }
};