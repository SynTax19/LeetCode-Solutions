class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
          int n = matrix.size(), m = matrix[0].size();
          int i=0, j=m-1 , f=0; 
          
          while(i<=n-1 && j>=0){
              if (matrix[i][j] == target){ f=1; break; }
              
              else if (matrix[i][j] > target) { j--; }
              
              else { i++; }
              
          }
        if (f)  return 1; 
        else return 0;
               
    }
};