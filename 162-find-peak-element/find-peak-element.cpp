class Solution {
public:
    int findPeakElement(vector<int> nums)
    {
        
        int n=nums.size();
        int start=0 , end=n-1 , mid;
        if(n==1)
        
        return 0;

        if(nums[0]>nums[1])
        return 0;
        
        if(nums[n-1]>nums[n-2])
        return n-1;

        
        
        while (start<=end)
        {
            mid=start+(end-start)/2;
            
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
            return mid;
            
            else if(nums[mid]<nums[mid+1] )
            {
                if(nums[mid+1]>nums[mid+2])
                return mid+1;

                else
                start=mid+1;
            }
            
            else
            {
                if(nums[mid-1]<nums[mid])
                return mid;
                
                else
                end=mid-1;
            }

        }
        return -1;
        
    }
};