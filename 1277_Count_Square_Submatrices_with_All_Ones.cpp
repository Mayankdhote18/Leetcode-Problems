class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int total = 0;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matrix[i][j] == 1) {
                    int maxSize = min(rows - i, cols - j);
                    for (int size = 1; size <= maxSize; ++size) {
                        bool valid = true;
                        for (int x = 0; x < size && valid; ++x) {
                            for (int y = 0; y < size && valid; ++y) {
                                if (matrix[i + x][j + y] != 1) {
                                    valid = false;
                                }
                            }
                        }
                        if (valid) {
                            total++;
                        } else {
                            break; 
                        }
                    }
                }
            }
        }

        return total;
    }
};
