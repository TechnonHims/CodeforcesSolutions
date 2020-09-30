#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define const ll mod = 1000000007;
#define fora(ds) for (auto &i : ds) // ds = data structure
#define FOR(x) for (auto it = x.begin(); it != x.end(); ++it)
#define forn(n) for (ll i = 0; i < n; i++)
#define forkn(i, k, n) for (ll i = k; i < n; i++)
#define forin(n) \
    for (ll i = n - 1; i >= 0; i--))
#define forkin(i, k, n) for (ll i = k; i >= n; i--)
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
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll k = n / m;
    vector<int> a(n);
    vector<vector<int>> val(m);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        val[a[i] % m].push_back(i);
    }

    ll ans = 0;
    vector<pair<int, int>> fre;
    forn(2 * m)
    {
        ll cur = i % m;
        while (int(val[cur].size()) > k)
        {
            int elem = val[cur].back();
            val[cur].pop_back();
            fre.push_back(make_pair(elem, i));
        }
        while (int(val[cur].size()) < k && !fre.empty())
        {
            int elem = fre.back().first;
            int mmod = fre.back().second;
            fre.pop_back();
            val[cur].push_back(elem);
            a[elem] += i - mmod;
            ans += i - mmod;
        }
    }

    cout << ans << endl;
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}