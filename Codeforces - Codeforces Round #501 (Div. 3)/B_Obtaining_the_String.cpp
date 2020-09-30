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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, j;
    string s1, s2;
    vcl pos;

    cin >> n;
    cin >> s1 >> s2;
    forn(n)
    {
        if (s1[i] != s2[i])
        {
            for (j = i + 1; j < n; ++j)
            {
                if (s1[j] == s2[i])
                {
                    s1.erase(j, 1);
                    s1 = s2.substr(0, i + 1) + s1.substr(i, n - 1);
                    forkin(k, j, i + 1) pos.emplace_back(k);
                    break;
                }
            }
            if (j == n)
            {
                cout << -1;
                goto out;
            }
        }
    }
    cout << pos.size() << endl;
    fora(pos) couts(i);

out:
    return 0;
}