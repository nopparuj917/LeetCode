#include <bits/stdc++.h>
#include "two_sum.h"
using namespace std;
int main() {
  vector<int> v = {1, 2, 3};

  vector<int> r = twoSum(v, 3);
  cout << r[0] << " " << r[1] << endl;
}