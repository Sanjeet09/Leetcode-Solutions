class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    
        int n= matrix.size();
        int i,j;
        
        for(i=0;i<n;i++){
            for(j=0 ; j<n; j++){
                if(j<=n-1-i)
                    swap(matrix[i][j], matrix[n-1-j][n-1-i]);
            }
        }
        
        int start,end;
        
        for(i=0;i<n; i++){
            start=0;
            end=n-1;
            
            while(start<=end){
                swap(matrix[start][i], matrix[end][i]);
                start++;
                end--;
            }
        }
        
    }
};
