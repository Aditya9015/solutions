class Solution {
public:
    int shipWithinDays(vector<int>& A, int M) {
        
        int start=0,end,mid,ans, N=A.size();
        //code here
        for(int i=0;i<N;i++)
        {
            
            start=max(A[i],start);
            end+=A[i];
        }
        
        
        while(start<=end)
        {
            mid=(start+end)/2;
            
            int count=1,pages=0;
            
            for(int i=0;i<N;i++)
            {
                pages+=A[i];
                
                if(pages>mid)
                {
                    count++;
                    pages=A[i];
                }
            }
            
            if(count<=M)
            {
                ans=mid;
                end=mid-1;
                
            }
            
            else
            start=mid+1;
        }
        
        return ans;
        
    }
    
};