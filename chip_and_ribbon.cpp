#include <bits/stdc++.h>
using namespace std;


void solve() {
  int n;
  cin >> n;
  vector<long long> v(n);
  for(auto &x : v) cin >> x;
  long long ans = 0;
  ans += v[0]-1;
  for(int i = 1 ; i < n ; i++) {
    if(v[i] > v[i-1]) {
      ans += v[i] - v[i-1];
    }
  }
  cout<<ans<<"\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}