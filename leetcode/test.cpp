#include "all.h"
#include <vector>
using namespace std;
const int N = 2510;
int n, a[N], f[N];

int partitionString(string s) {
  int ans = 1;
  vector<bool> vis(26);
  for (char c : s) {
    int x = c - 'a';
    if (vis[x])
      ans++, vis.clear(), vis.resize(26);
    vis[x] = true;
  }
  return ans;
}

int main() { return 0; }