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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, k, val, sum;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        vcl ar;
        forn(n)
        {
            cin >> val;
            ar.emplace_back(val);
        }

        sum = 0;

        sort(ar.begin(), ar.end());
        forkn(i, 1, n)
        {
            sum += (k - ar[i]) / ar[0];
        }

        cout << sum << endl;
    }
    return 0;
}