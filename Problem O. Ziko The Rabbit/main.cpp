///////////////////////
// Author: Ahmed Nageh
///////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl  '\n'

void MangOo_oO ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("ziko.in", "r", stdin);
}

auto do_W_ork ()
{
    ll n, ans = 0;
    cin >> n;
    for(int i = 1 ; i <= n ; i*=2)
    {
        ans += i;
    }
    cout << ans << endl;
}

int main()
{
    MangOo_oO();
    int T = 1;
    cin >> T;
    while(T--)
    {
        do_W_ork();
    }

}
