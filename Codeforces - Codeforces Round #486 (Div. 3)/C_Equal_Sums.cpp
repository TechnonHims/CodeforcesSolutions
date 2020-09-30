#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define const ll mod = 1000000007;
#define forn(n) for (int i = 0; i < n; ++i)
#define fora(i, ds) for (auto i : ds) // ds = data structure
#define FOR(i, n) for (int i = 0; i < n; ++i)
#define forl(start, n, step) for (int i = start; i < n; i += step)
#define coutl cout << endl;
#define couts(val) cout << val << " "
#define mpii map<int, int>
#define mpsi map<string, int>
#define mpll map<ll, ll>
#define vci vector<int>
#define vcl vector<ll>
#define vcs vector<string>
#define paii pair<int, int>
#define vp vector<paii>
#define vc(type) vector<type>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, series_sum;
    set<pair<int, paii>> table;

    cin >> k;
    FOR(i, k)
    {
        cin >> n;
        vci series(n);
        series_sum = 0;
        FOR(j, n)
        {
            cin >> series[j];
            series_sum += series[j];
        }

        FOR(j, n)
        table.insert({series_sum - series[j], {i, j + 1}});
    }

    bool flag = false;
    pair<int, paii> prev = *(table.begin());
    // fora(i, table) cout << i.first << " " << i.second.first << " " << i.second.second << endl;
    fora(i, table)
    {
        if (i == *(table.begin()))
            continue;
        if (i.first == prev.first && i.second.first != prev.second.first)
        {
            cout << "YES" << endl;
            couts(i.second.first + 1) << i.second.second << endl;
            couts(prev.second.first + 1) << prev.second.second << endl;
            flag = true;
            break;
        }
        else
            prev = i;
    }
    if (!flag)
        cout << "NO";

    return 0;
}