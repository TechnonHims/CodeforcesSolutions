#include <bits/stdc++.h>

using namespace std;
#define long long ll;
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

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, val;
    // vci ar;
    string s;
    int count;

    cin >> n;

    cin >> s;

    count = 0;

    forn(n - 2) if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')++ count;
    cout << count;

    return 0;
}