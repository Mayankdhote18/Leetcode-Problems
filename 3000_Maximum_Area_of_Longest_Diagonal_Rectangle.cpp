class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxDiag = 0;
        int maxArea = 0;

        for (auto& rect : dimensions) {
            int l = rect[0];
            int w = rect[1];
            double diag = sqrt(l * l + w * w);
            int area = l * w;

            if (diag > maxDiag) {
                maxDiag = diag;
                maxArea = area;
            } else if (abs(diag - maxDiag) < 1e-9) { 
                maxArea = max(maxArea, area);
            }
        }

        return maxArea;
    }
};
