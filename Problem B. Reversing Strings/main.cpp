#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl  '\n'

void MangOo_oO ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("rev.in", "r", stdin);
}

auto do_W_ork ()
{
    int n, m;
    string s, z, t;
    cin >> n >> m >> s >> z;
    t = s;
    reverse(t.begin(), t.end());
    if(z.find(s) != string :: npos or z.find(t) != string :: npos)
    {
        cout << "YES\n";
    }
    else cout << "NO\n";
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
