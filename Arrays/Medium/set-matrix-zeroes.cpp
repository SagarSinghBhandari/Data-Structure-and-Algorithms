// LC 73: set-matrix-zeroes
class Solution
{
public:
  // 1). A simple improvement that uses O(m + n) space
  /*
  void setZeroes(vector<vector<int>>& mat) {
      int m = mat.size(), n = mat[0].size();
      vector<int>row(m,0),col(n,0);
      for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
              if(mat[i][j]==0){
                  row[i] = 1;
                  col[j] = 1;
              }
          }
      }
      for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
              if(row[i] || col[j])
                  mat[i][j] = 0;
          }
      }
      return;
  }
  */
  void setZeroes(vector<vector<int>> &mat)
  {
    int m = mat.size(), n = mat[0].size(), col0 = 1;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (mat[i][j] == 0)
        {
          mat[i][0] = 0;
          if (j == 0)
            col0 = 0;
          else
            mat[0][j] = 0;
        }
      }
    }
    for (int i = 1; i < m; i++)
    {
      for (int j = 1; j < n; j++)
      {
        if (mat[i][j] != 0)
        {
          if (mat[i][0] == 0 || mat[0][j] == 0)
          {
            mat[i][j] = 0;
          }
        }
      }
    }
    if (mat[0][0] == 0)
    {
      for (int i = 0; i < n; i++)
        mat[0][i] = 0;
    }
    if (col0 == 0)
    {
      for (int i = 0; i < m; i++)
        mat[i][0] = 0;
    }
    return;
  }
};