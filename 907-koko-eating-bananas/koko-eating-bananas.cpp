class Solution {
public:
    int minEatingSpeed(vector<int>& stalls, int h) {
      

        int start=0,end=0,mid,k,n=stalls.size();
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=stalls[i];
            if(stalls[i]>end)
            end=stalls[i];
        }
        start=sum/h;

        if (!start)
        start=1;
        
        while(start<=end)
        {
            mid=(start+end)/2;
            int timet=0;
            
            for(int i=0;i<n;i++)
            {
                timet+=stalls[i]/mid;
                if(stalls[i]%mid)
                timet++;

            
            }
            
            if(timet<=h)
            {
                k=mid;
                end=mid-1;
            }
            
            else
            start=mid+1;
                
        
        }
        return k;
        
    }
};