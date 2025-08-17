class solution{
    public:
    void leftRotate(vector<int> nums ){
          int temp = nums[0];
          for(int i=0;i<n;i++)
          {
            nums[i-1]=nums[i];
          }
          nums[n-1]= temp;
          return nums;
    }
};