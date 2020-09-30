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

    ll t, n, val, cur_val, count, max;
    cin >> n;

    // vcl ar;
    cin >> val;
    max = count = 1;
    forn(n - 1)
    {
        cin >> cur_val;
        ++count;
        if (cur_val > 2 * val)
            count = 1;
        if (max < count)
            max = count;
        val = cur_val;
        // ar.emplace_back(val);
    }

    cout << max;

    // // max = count = 1;
    // forkn(i, 1, n)
    // {
    //     ++count;
    //     if (ar[i] > 2 * ar[i - 1])
    //         count = 1;
    //     if (count > max)
    //         max = count;
    // }

    // cout << max;

    return 0;
}