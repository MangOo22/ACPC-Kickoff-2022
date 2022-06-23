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
    freopen("sub.in", "r", stdin);
}

auto do_W_ork ()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), ans(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> tempA = a;
    sort(tempA.begin(), tempA.end());
    for (int i = 0; i < n; i++)
    {
        if (mp.count(a[i])) ans[i] = mp[a[i]]++;
        else
        {
            mp[a[i]] = lower_bound(tempA.begin(), tempA.end(), a[i]) - tempA.begin();
            ans[i] = mp[a[i]]++;
        }
    }
    int answer = 0;
    for (int i = n - 1; ~i; i--)
    {
        int cur = ans[i];
        while (i > cur)
        {
            i--;
            if (i) {
                cur = min(cur, ans[i]);
            }
        }
        answer++;
    }
    cout << (answer >= k ? "YES\n" : "NO\n");
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
