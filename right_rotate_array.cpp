class solution{
    public:
    void rightRotate (vector<int> nums){
        int k=nums.size();
        int temp= nums[k-1];
        for(int i=0;i<k;i++)
        {
            nums[i+1]=nums[i];
        }
        nums[0]= temp;
        return nums;
    }
}