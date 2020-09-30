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

bool compare(string &s1, string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, index;

    cin >> n;
    vcs ar(n);

    forn(n) cin >> ar[i];

    sort(ar.begin(), ar.end(), compare);

    index = 0;
    forn(n - 1)
    {
        if (ar[i + 1].find(ar[i]) == string::npos)
            break;
        index = i + 1;
    }

    if (index == n - 1)
    {
        cout << "YES" << endl;
        fora(ar) cout << i << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}