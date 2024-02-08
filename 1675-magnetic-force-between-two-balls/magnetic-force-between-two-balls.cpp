class Solution {
public:
    int maxDistance(vector<int>& stalls, int m) {
         sort(stalls.begin(),stalls.end());
        
        int start=1,end,mid,ans,n=stalls.size();
        
        end=stalls[n-1]-stalls[0];
        
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            
            int count=1, pos=stalls[0];
            
            for(int i=1;i<n;i++)
            {
                if(pos+mid<=stalls[i])
                {
                    count++;
                    pos=stalls[i];
                
                }
            
            }
            
            if(count<m)
            end=mid-1;
            
            else{
                start=mid+1;
                ans=mid;
            }
        }
        
        return ans;
        
    }
};