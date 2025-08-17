class Solution {
public:
    bool rotateString(string s, string goal) {
        string doubled = s+s;
        return s.length() == goal.length() && doubled.find(goal) != string::npos;
    }
};


