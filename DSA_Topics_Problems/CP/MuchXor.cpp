// https://my.newtonschool.co/course/jtrr9p6u9dat/assignment/rkp1ithkwgfx/dashboard/?tab=questions
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  const int MAX = 260000;
  vector<int> m(MAX, 787788);
  vector<int> n(MAX, 787788);
  m[0] = n[0] = 0;
  for (int r = 2; r <= 501; r++) {
    int j = r * (r - 1) / 2;
    for (int i = j; i < MAX; i++) {
      m[i] = min(m[i], m[i - j] + r);
      n[i] = min(n[i], max(m[i], 2 * r - 1));
    }
  }
  int a;
  cin >> a;
  while (a--) {
    int b, c;
    cin >> b >> c;
    cout << (c < MAX && n[c] <= b + 1 ? "YES" : "NO") << '\n';
  }
  return 0;
}