package Classwork;

public class leetcode {
    public boolean exist(char[][] board, String word) {
        int m = board.length, n = board[0].length;
        boolean[][] visited = new boolean[m][n];
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, word, 0, i, j, visited)) {
                    return true;
                }
            }
        }
        
        return false;
    }
    
    private boolean dfs(char[][] board, String word, int index, int x, int y, boolean[][] visited) {
        if (index == word.length()) {
            return true;
        }
        
        if (x < 0 || x >= board.length || y < 0 || y >= board[0].length || visited[x][y] || board[x][y] != word.charAt(index)) {
            return false;
        }
        
        visited[x][y] = true;
        boolean result = dfs(board, word, index + 1, x - 1, y, visited)
            || dfs(board, word, index + 1, x + 1, y, visited)
            || dfs(board, word, index + 1, x, y - 1, visited)
            || dfs(board, word, index + 1, x, y + 1, visited);
        visited[x][y] = false;
        
        return result;
    }
    
}
