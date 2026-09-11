class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int color, int og, int n,
             int m) {
        if (i >= n || j >= m || i < 0 || j < 0 || image[i][j] != og ||
            image[i][j] == color)
            return;
        image[i][j] = color;
        dfs(image, i - 1, j, color, og, n, m);
        dfs(image, i + 1, j, color, og, n, m);
        dfs(image, i, j - 1, color, og, n, m);
        dfs(image, i, j + 1, color, og, n, m);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int originalColor = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        dfs(image, sr, sc, color, originalColor, n, m);
        return image;
    }
};