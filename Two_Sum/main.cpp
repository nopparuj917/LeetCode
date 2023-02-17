#include "two_sum.h"
#include <bits/stdc++.h>
using namespace std;
int main() {
  int m, t;
  cin >> m >> t;
  vector<int> v(m);
  for (int i = 0; i < m; ++i) {
    cin >> v[i];
  }
  vector<int> r = twoSum(v, t);
  cout << r[0] << " " << r[1] << endl;
}