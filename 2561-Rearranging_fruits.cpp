class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> count;
        for (int val : basket1) count[val]++;
        for (int val : basket2) count[val]--;

        vector<int> excess1, excess2;
        int minVal = INT_MAX;

        for (auto& [fruit, freq] : count) {
            if (freq % 2 != 0) return -1; 
            int half = abs(freq) / 2;
            if (freq > 0) {
                while (half--) excess1.push_back(fruit);
            } else if (freq < 0) {
                while (half--) excess2.push_back(fruit);
            }
        }

        if (excess1.empty()) return 0; 

        sort(excess1.begin(), excess1.end());
        sort(excess2.rbegin(), excess2.rend()); 

        minVal = min(*min_element(basket1.begin(), basket1.end()), 
                     *min_element(basket2.begin(), basket2.end()));

        long long totalCost = 0;
        int n = excess1.size();
        for (int i = 0; i < n; ++i) {
            totalCost += min((long long)min(excess1[i], excess2[i]), 2LL * minVal);
        }

        return totalCost;
    }
};
