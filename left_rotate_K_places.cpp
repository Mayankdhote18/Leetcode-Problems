class Solution{
    public:
    void leftRotate(vector<int>& nums, int d){
        int n=nums.size()
        reverse(nums.begin(), nums.begin()+d);
        reverse(nums.begin()+d, nums.end());
        reverse(nums.begin(), nums.end())
    }
};