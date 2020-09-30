#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define const ll mod = 1000000007;
// #define forn(n) for (int i = 0; i < n; ++i)
#define fora(ds) for (auto i : ds) // ds = data structure
#define FOR(x) for (auto it = x.begin(); it != x.end(); ++it)
#define forn(n) for (ll i = 0; i < n; i++)
#define forkn(i, k, n) for (ll i = k; i < n; i++)
#define forin(n) \
    for (ll i = n - 1; i >= 0; i--))
// #define forl(start, n, step) for (int i = start; i < n; i += step)
// #define FOR(i, start, n) for (int i = start; i < n; ++i)
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

    int n, m = 0;
    cin >> n;
    vcl ar(n), temp, final_ar;
    forn(n) cin >> ar[i];

    sort(ar.begin(), ar.end());
    final_ar.emplace_back(ar[0]);
    m = 1;
    forn(n)
    {
        ll start = ar[i];
        temp.emplace_back(start);
        forkn(j, 0, 31)
        {
            ll left = start - (1 << j);
            ll right = start + (1 << j);
            if (binary_search(ar.begin(), ar.end(), left){
                if ()
                    temp.emplace_back(left);
            }
            if (binary_search(ar.begin(), ar.end(), right))
                temp.emplace_back(right);
        }

        if (temp.size() > m)
            final_ar.swap(temp);

        temp.clear();
    }

    cout << final_ar.size() << endl;
    fora(final_ar) couts(i);

    return 0;
}