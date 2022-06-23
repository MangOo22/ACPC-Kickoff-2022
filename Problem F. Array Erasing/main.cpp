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
    freopen("erase.in", "r", stdin);
}

const int N = 1e6+5;

auto do_W_ork ()
{
    int n;
    cin >> n;
    vector<int> a(n), vis(N);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int cnt = 0;
    for(int i = 0; i < n ; i++)
    {
        if(!vis[a[i]])
        {
            cnt ++;
            for(int j = a[i]; j < N; j+=a[i])
            {
                vis[j] = 1;
            }
        }
    }
    cout << cnt << endl;
}

int main()
{
    MangOo_oO();
    int T = 1;
    //cin >> T;
    while(T--)
    {
        do_W_ork();
    }

}
