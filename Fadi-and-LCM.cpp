
// https://codeforces.com/problemset/problem/1285/C

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll lcm(ll a, ll b){

    return (a / __gcd(a, b)) * b;
}

int32_t main()
{
    NEED_FOR_SPEED;
    
    ll x;
    cin >> x;

    ll ans;

    for(ll i = 1; i*i <= x; i++){

        if((x % i == 0) && lcm(i, x/i) == x){
            ans = i;
        }
    }

    cout << ans << ' ' << x/ans << '\n';
    return 0;
}