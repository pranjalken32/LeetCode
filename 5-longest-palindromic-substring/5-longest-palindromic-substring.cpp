class Solution {
  public:
    string longestPalindrome(string s) {
      int temp = 0, ans = 0, start, end;
      vector < vector < int >> dp(s.size(), vector < int > (s.size(), 0));
      while (temp < s.size()) {
        for (int row = 0, col = temp; row < s.size() - temp && col < s.size(); col++, row++) {
          if (col == row)
            dp[row][col] = 1;
          else if (s[col] == s[row] && col - row == 1)
            dp[row][col] = 1;
          else if (s[col] == s[row] && dp[row + 1][col - 1] == 1)
            dp[row][col] = 1;
          if (dp[row][col] == 1 && col - row + 1 > ans)
            ans = col - row + 1, start = row, end = col;
        }
        temp++;
      }
      return s.substr(start, end - start + 1);
    }
};
