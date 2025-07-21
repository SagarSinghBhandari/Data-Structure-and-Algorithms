// LC 48: rotate-image
class Solution
{
public:
  void rotate(vector<vector<int>> &mat)
  {
    int n = mat.size();
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        swap(mat[i][j], mat[j][i]);
      }
    }
    for (int i = 0; i < n; i++)
    {
      reverse(mat[i].begin(), mat[i].end());
    }
    return;
  }
};

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> mat(n, vector<int>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> mat[i][j];
    }
  }
  Solution obj;
  obj.rotate(mat);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << mat[i][j];
    }
  }
}