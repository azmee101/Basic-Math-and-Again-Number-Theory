
// https://lightoj.com/problem/february-29

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED                \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve(int c)
{

    string str1, str2;
    int date1, date2;
    int year1, year2;
    char x;

    cin >> str1 >> date1 >> x >> year1;
    cin >> str2 >> date2 >> x >> year2;

    int strt = year1, end = year2;
    
    if (str1 != "January" && str1 != "February"){
        
        strt++;
    }
    
    if (str2 == "January" || (str2 == "February" && date2 < 29)){
        
        end--;
    }

    
    int mul_of_4 = end/4 - (strt-1)/4;
    int mul_of_400 = end/400 - (strt-1)/400;
    int mul_of_100 = end/100 - (strt-1)/100;

    int tot = mul_of_4 + mul_of_400 - mul_of_100;
    cout << "Case "  << c << ": " << tot << '\n';
}

int32_t main()
{
    NEED_FOR_SPEED;
    int t;
    cin >> t;
    int c = 0;
    while (t--)
    {
        solve(++c);
    }
    return 0;
}