class Solution
{
public:
    void inSort(vector<int> &arr, int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
            else
                break;
        }
    }
    void merge(vector<int> &X, vector<int> &Y)
    {
        // Write your code here...
        int n1 = X.size();
        int n2 = Y.size();
        int i = 0;
        while (i < n1)
        {
            if (X[i] > Y[0])
            {
                swap(X[i], Y[0]);
                inSort(Y, n2);
            }
            else
                i++;
        }
    }
};