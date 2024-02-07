class Solution {
public:
    int mySqrt(int x) {

        int start=1, end=x, mid, ans;

        if(x<2)
        return x;

        while (start<=end)
        {
            mid=start+(end-start)/2;

            if(mid==x/mid)
            { 
                ans=mid;
                break;
            }

            else if(mid<x/mid)
            {
                start=mid+1;
                ans=mid;
            }

            else 
            end=mid-1;

        }

        return ans;
    }
};