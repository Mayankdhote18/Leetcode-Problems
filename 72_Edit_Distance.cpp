class Solution {
public:
    int solve(string& word1, string& word2, int i, int j) {
        if (i < 0) return j + 1; 
        if (j < 0) return i + 1; 

        if (word1[i] == word2[j]) {
            return solve(word1, word2, i - 1, j - 1);
        } else {
            int insertOp = solve(word1, word2, i, j - 1);
            int deleteOp = solve(word1, word2, i - 1, j);
            int replaceOp = solve(word1, word2, i - 1, j - 1);

            return 1 + min({insertOp, deleteOp, replaceOp});
        }
    }

    int minDistance(string word1, string word2) {
        return solve(word1, word2, word1.length() - 1, word2.length() - 1);
    }
};
