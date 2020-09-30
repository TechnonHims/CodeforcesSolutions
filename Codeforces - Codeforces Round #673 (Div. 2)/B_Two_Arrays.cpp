#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define const ll mod = 1000000007;
#define fora(ds) for (auto &i : ds) // ds = data structure
#define FOR(x) for (auto it = x.begin(); it != x.end(); ++it)
#define forn(n) for (ll i = 0; i < n; i++)
#define forkn(i, k, n) for (ll i = k; i < n; i++)
#define forin(n) for (ll i = n - 1; i >= 0; i--)
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
#define pb(val) push_back(val)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N, T;
    cin >> N >> T;
    vcl v(N), c, d, left;
    map<ll, ll> m;
    forn(N)
    {
        cin >> v[i];
        m[v[i]] += 1;
    }
    // debmap(m);
    sort(v.begin(), v.end());
    forn(N)
    {
        if (m[T - v[i]] < 0)
        {
            left.pb(v[i]);
            m.erase(T - v[i]);
        }
        else
        {
            if (m[v[i]] > 0)
            {
                c.pb(v[i]);
                m[v[i]] -= 1;
            }
            if (m[T - v[i]] > 0)
            {
                d.pb(T - v[i]);
                m[T - v[i]] -= 1;
            }
            // m[v[i]] -= 1;
            // m[T - v[i]] -= 1;
        }
    }
    // debmap(m);
    // debvector(c);
    // debvector(d);
    // debvector(left);
    if (left.size() & 1)
    {
        forn(left.size() / 2)
        {
            c.pb(left[i]);
            d.pb(left[i] + N / 2);
        }
        c.pb(left[N - 1]);
    }
    else
    {
        forn(left.size() / 2)
        {
            c.pb(left[i]);
            d.pb(left[i] + N / 2);
        }
    }