class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int row = 1; row <= numRows; row++) {
            vector<int> currentRow(row, 1);

            for (int col = 1; col < row - 1; col++) {
                currentRow[col] =
                    ans[row - 2][col - 1] + ans[row - 2][col];
            }

            ans.push_back(currentRow);
        }

        return ans;
    }
};