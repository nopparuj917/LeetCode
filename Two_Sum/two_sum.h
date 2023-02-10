#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> nums, int target) {
  map<int, int> m;
  vector<int> r;
  for (int i = 0; i < nums.size(); ++i) {
    if (m.find(nums[i]) == m.end()) {
      m[nums[i]] = i;
    }
    int j, d = target - nums[i];
    if ((m.find(d) != m.end()) && ((j = m[d]) < i)) {
      r.push_back(i);
      r.push_back(j);
    }
  }
  return r;
}
