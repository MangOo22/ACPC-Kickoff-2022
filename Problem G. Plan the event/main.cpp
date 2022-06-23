#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl  '\n'

void MangOo_oO ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("event.in", "r", stdin);
}

const int N = 1e6+5;

auto do_W_ork ()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n+5, vector<char> (m+5)), temp;

    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    temp = a;
    int ev = 0, od = 0;
    // even rows
    for(int i = 0; i < n; i+=2)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == '.')
            {
                ev++;
                temp[i][j] = '#';
            }
        }
    }
    // odd rows
    for(int i = 1; i < n; i+=2)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == '.')
            {
                od++;
                a[i][j] = '#';
            }
        }
    }

    if(od < ev)
    {
        a.swap(temp);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
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
