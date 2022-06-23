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
    freopen("schedule.in", "r", stdin);
}

auto do_W_ork ()
{
    int n;  cin >> n;
    vector<pair<string , int>> v;
    for(int i = 0 ; i < n ; i++) {
        int activity; string time , am;
        cin >> activity >> time >> am;
        am += time;
        v.push_back({am , activity});
    }
    sort(v.begin() , v.end());
    for(auto i : v) {
        cout << i.second << ' ';
    }
    cout << endl;
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
