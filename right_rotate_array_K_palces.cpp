class Solution{
    public:
    void rightRotate(vector<int>& nums , int d)
    int k = nums.size()
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+d);
    reverse(nums.begin()+d, nums.end());
}