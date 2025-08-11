class Solution {
public:
    const long long MOD = 1e9 + 7;

    long long modPow(long long base, long long exp) {
        long long res = 1;
        while (exp > 0) {
            if (exp & 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return res;
    }

    vector<int> productQueries(int n, vector<vector<int>>& queries) {

        vector<long long> powers;
        for (int i = 0; n > 0; i++) {
            if (n & 1) powers.push_back(1LL << i);
            n >>= 1;
        }

        vector<long long> prefix(powers.size());
        prefix[0] = powers[0] % MOD;
        for (int i = 1; i < powers.size(); i++) {
            prefix[i] = (prefix[i - 1] * powers[i]) % MOD;
        }

       
        vector<int> ans;
        for (auto &q : queries) {
            int l = q[0], r = q[1];
            if (l == 0) {
                ans.push_back((int)prefix[r]);
            } else {
                long long denom = prefix[l - 1];
                long long inv = modPow(denom, MOD - 2); 
                ans.push_back((int)((prefix[r] * inv) % MOD));
            }
        }
        return ans;
    }
};
