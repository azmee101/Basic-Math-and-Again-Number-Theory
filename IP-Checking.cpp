
// https://lightoj.com/problem/ip-checking

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int dec_to_bin(int a){

    string ans;

    while(a){

        int tmp = a % 2;
        char ch = '0' + tmp;
        ans.push_back(ch);
        a /= 2;
    }

    reverse(ans.begin(), ans.end());

    if(ans.size() == 0) ans.push_back('0');
    
    return stoi(ans);
}


void solve(int y){

    int a, b, c, d;
    char x;
    cin >> a >> x >> b >> x >> c >> x >> d;

    int m, n, o, p;
    cin >> m >> x >> n >> x >> o >> x >> p;

    int arr[4];

    arr[0] = dec_to_bin(a);
    arr[1] = dec_to_bin(b);
    arr[2] = dec_to_bin(c);
    arr[3] = dec_to_bin(d);

    cout << "Case " << y << ": ";

    if(arr[0] == m && arr[1] == n && arr[2] == o && arr[3] == p){
        
        cout << "Yes\n";
    }
    else{

        cout << "No\n";
    }
}


int32_t main()
{
    NEED_FOR_SPEED;
    
    int t;
    cin >> t;
    int y = 0;
    while(t--){
        solve(++y);
    }
    return 0;
}

