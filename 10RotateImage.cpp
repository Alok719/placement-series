class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < m; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            int k = m - 1;
            for (int j = 0; j < m / 2; j++)
            {
                swap(matrix[i][j], matrix[i][k]);
                k--;
            }
        }
    }
};