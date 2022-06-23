#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl  '\n'

void MangOo_oO ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("good.in", "r", stdin);
}

auto do_W_ork ()
{
    int n, k;
    string good;
    cin >> n >> k >> good;
    int ans = 0;
    for(int i = 0 ; i < k ; i++)
    {
        int cnt = 0, mx  = 0;
        vector<int> fr(26);
        for(int j = i; j < n; j += k)
        {
            fr[good[j]-'a']++;
            mx = max(mx, fr[good[j]-'a']);
            cnt++;
        }
        ans += cnt - mx;
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
