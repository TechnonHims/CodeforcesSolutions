#include <bits/stdc++.h>
using namespace std;
#define const ll mod = 1000000007;
#define ll long long
#define forn(n) for (int i = 0; i < n; ++i)
#define fora(ds) for (auto i : ds) // ds = data structure
#define coutl cout << endl;
#define mpii map<int, int>
#define mpsi map<string, int>
#define mpll map<ll, ll>
#define vci vector<int>
#define vcl vector<ll>
#define vcs vector<string>
#define paii pair<int, int>
#define vp vector<paii>
#define vc(type) vector<type>

int_fast32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, val, posDiff, finalb, q, l, r, x;

    cin >> n;
    vcl a(n), diff(n - 1);

    forn(n) cin >> a[i];

    posDiff = 0;
    forn(n - 1)
    {
        diff[i] = a[i + 1] - a[i];
        if (diff[i] > 0)
            posDiff += diff[i];
    }

    finalb = a[0] + posDiff;
    if (finalb > 0)
        cout << (finalb + 1) / 2 << endl;
    else
        cout << finalb / 2 << endl;

    cin >> q;
    forn(q)
    {
        cin >> l >> r >> x;
        --l;
        --r;
        if (l == 0)
            a[0] += x;

        if (l > 0)
        {
            if (diff[l - 1] > 0)
                posDiff -= diff[l - 1];
            diff[l - 1] += x;
            if (diff[l - 1] > 0)
                posDiff += diff[l - 1];
        }
        if (r < n - 1)
        {
            if (diff[r] > 0)
                posDiff -= diff[r];
            diff[r] -= x;
            if (diff[r] > 0)
                posDiff += diff[r];
        }

        finalb = a[0] + posDiff;
        if (finalb > 0)
            cout << (finalb + 1) / 2 << endl;
        else
            cout << finalb / 2 << endl;
    }
    return 0;
}