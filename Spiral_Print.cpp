#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        vector<int> ans;

        if (matrix.empty())
        {
            return ans; // Return an empty vector for empty input
        }

        int sr = 0, er = matrix.size() - 1, sc = 0, ec = matrix[0].size() - 1;

        while (sr <= er && sc <= ec)
        {

            for (int i = sc; i <= ec; i++)
            {
                ans.push_back(matrix[sr][i]);
            }
            sr++;

            for (int i = sr; i <= er; i++)
            {
                ans.push_back(matrix[i][ec]);
            }
            ec--;

            if (sr < er)
            {
                for (int i = ec; i >= sc; i--)
                {
                    ans.push_back(matrix[er][i]);
                }
                er--;
            }

            if (sc < ec)
            {
                for (int i = er; i >= sr; i--)
                {
                    ans.push_back(matrix[i][sc]);
                }
                sc++;
            }
        }

        return ans;
    }
};