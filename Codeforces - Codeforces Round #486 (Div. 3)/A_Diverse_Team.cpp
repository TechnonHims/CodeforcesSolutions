#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define const ll mod = 1000000007;
#define forn(n) for (int i = 0; i < n; ++i)
#define fora(ds) for (auto i : ds) // ds = data structure
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
    int t, n, val, k;

    cin >> n >> k;

    vci ar(n), distinct;

    forn(n) cin >> ar[i];

    mpii freq;

    forn(n)
    {
        if (!freq[ar[i]])
            freq[ar[i]] = i + 1;
    }

    fora(freq) distinct.emplace_back(i.second);

    if (distinct.size() >= k)
    {
        cout << "YES" << endl;
        forn(k) couts(distinct[i]);
    }
    else
        cout << "NO" << endl;
    return 0;
}