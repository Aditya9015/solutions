class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n=matrix.size();

        //transpose
        int row=n,col=n;
        
        for(int i=0;i<row-1;i++)
        {
            for(int j=i+1;j<col;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            };
        }

        //reverse
        for(int i=0;i<n;i++)
        {
        int start=0,end=n-1;
        while(start<end)
        {
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }

        };


        
    }
};