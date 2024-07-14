
// https://lightoj.com/problem/integer-divisibility

#include<bits/stdc++.h>
using namespace std;


void solve(int cs){
  int n, k; cin >> n >> k;
  int ans = 0, cnt = 0;
  while(true){
    ans = (ans*10+k)%n;
    cnt++;
    if(ans == 0){
      break;
    }
  }
  cout << "Case " << cnt << ": " << cnt << '\n';
  return;
}

int main()
{
  int t; cin >> t;
  int cs = 0;
  while(t--){
    solve(++cs);
  }
  return 0;
}