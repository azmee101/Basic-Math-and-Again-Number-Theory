
// https://lightoj.com/problem/large-division

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(int cs){

    string str;
    ll n;
    cin >> str;
    cin >> n;


    if(str[0] == '-'){
        str.erase(str.begin());
    }

    n = abs(n);

    ll ans = 0;

    for(int i = 0; i < str.size(); i++){

        // ans = (ans*10 + (str[i]-'0')) % n;
        // since it can cause the overflow for (ans * 10)
        // that is why according to the following property of module
        // (a*b)%n => (a%n * b%n) % n

        ans = ((ans*10) % n + (str[i]-'0')) % n;

    }
    cout << "Case " << cs << ": ";

    if(ans == 0){
        cout << "divisible\n";
    }

    else{
        cout << "not divisible\n";
    }

    return;
}

int32_t main()
{
    NEED_FOR_SPEED;
    int t;
    cin >> t;
    int cs = 0;
    while(t--){
        solve(++cs);
    }
    return 0;
}