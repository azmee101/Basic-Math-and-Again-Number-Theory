
// https://lightoj.com/problem/ekka-dokka

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(int cs){
  ll n; cin >> n;
  if(n % 2){
    cout << "Case " << cs << ": Impossible\n";
    return; 
  }  
  int po = 0;
  while(n % 2 == 0){
    n/=2;
    po++;
  }

    cout << "Case " << cs  << ": " << n << ' ' << pow(2, po) << '\n';

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