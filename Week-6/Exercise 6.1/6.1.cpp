#include<iostream>

class Solution
{
public:
    vector<vector<int>> construct2DArray(vector<int> &Original, int m, int n)
    {
        if (Original.size() != m * n)
            return {};
        vector<vector<int>> answer(m, vector<int>(n));
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                answer[i][j] = Original[k++];
            }
        }
        return answer;
    }
};