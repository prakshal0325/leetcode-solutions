class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {

        // time complexity = o(2 x m x n):
        // space complexity = o(n) + o(m):
        int n = a.size();
        int m = a[0].size();

        vector<int> row(n, 0);
        vector<int> col(m, 0);

        // Mark rows and columns containing 0
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Set marked rows and columns to 0
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    a[i][j] = 0;
                }
            }
        }
    }
};