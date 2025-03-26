#include <bits/stdc++.h>
using namespace std;

string s;
bool vis[7][7];
int ans = 0;

bool empty(int i, int j) {
  return i >= 0 && i < 7 && j >= 0 && j < 7 && !vis[i][j];
}

// Using dfs to expore all possible ways

// It will run like this 
// First, there are 4 directions -> Choose left
// Second, it will be 4 directions again -> Choose left ...

// The trick and tip that I learnt from William
// To solve this one-way from start to end grid (minimize the possible ways for dfs runs faster)
// Let take right direction for example
// Check if * is exist, if exist, there must be exist way in ? or ?, otherwise, something happens, and it doesn't work
// -------------
// |   | ? |   |
// -------------
// | O | X | * |
// -------------
// |   | ? |   |
// -------------

void dfs(int i, int j, int step = 0) {
  if (i == 6 && j == 0) {
    // If the final grid has 48 steps -> This way is accepted
    if (step == 48)
      ++ans;
    // Otherwise, it is illegal
    return;
  }

  // Mark the present grid
  vis[i][j] = 1;

  if (s[step] == '?' || s[step] == 'L') {
    if (j && !vis[i][j-1])
      if (!(!empty(i, j - 2) && empty(i - 1, j - 1) && empty(i + 1, j - 1)))
        dfs(i, j - 1, step + 1);
  }

  if (s[step] == '?' || s[step] == 'R') {
    if (j < 6 && !vis[i][j+1])
      if (!(!empty(i, j + 2) && empty(i - 1, j + 1) && empty(i + 1, j + 1)))
        dfs(i, j + 1, step + 1);
  }

  if (s[step] == '?' || s[step] == 'U') {
    if (i > 0 && !vis[i-1][j])
      if (!(!empty(i - 2, j) && empty(i - 1, j - 1) && empty(i - 1, j + 1)))
        dfs(i - 1, j, step + 1);
  }

  if (s[step] == '?' || s[step] == 'D') {
    if (i < 6 && !vis[i+1][j])
      if (!(!empty(i + 2, j) && empty(i + 1, j - 1) && empty(i + 1, j + 1)))
        dfs(i + 1, j, step + 1);
  }

  // Unmark the present grid
  vis[i][j] = 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> s;

  dfs(0, 0);

  cout << ans;

  return 0;

}


