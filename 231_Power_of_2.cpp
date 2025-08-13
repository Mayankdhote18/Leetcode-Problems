class Solution {
public:
    bool isPowerOfTwo(int n) {
        const int maxPowerOfTwo = 1073741824; 
        return n > 0 && maxPowerOfTwo % n == 0;
    }
};
