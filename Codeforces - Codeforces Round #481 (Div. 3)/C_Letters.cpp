#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define const ll mod = 1000000007;
#define forn(n) for (int i = 0; i < n; ++i)
#define fora(ds) for (auto i : ds) // ds = data structure
#define mpii map<int, int>
#define mpsi map<string, int>
#define mpll map<ll, ll>
#define vci vector<int>
#define vcl vector<ll>
#define vcs vector<string>
#define paii pair<int, int>
#define vp vector<paii>
#define vc(type) vector<type>
#define coutl cout << endl;
#define couts(val) cout << val << " "

// int find(vcl v, ll x)
// {
//     int mid, low = 1, high = v.size() - 1;
//     while (high >= low)
//     {
//         mid = low + (high - low) / 2;
//         if (x > v[mid - 1] && x <= v[mid])
//             break;
//         if (v[mid] > x)
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
//     return mid;
// }

int_fast32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, m, sum;
    ll val;
    vcl dorm;

    cin >> n >> m;

    dorm.push_back(0);
    forn(n)
    {
        cin >> val;
        dorm.push_back(dorm[i] + val);
    }

    forn(m)
    {
        cin >> val;
        ll dorm_no = (lower_bound(dorm.begin(), dorm.end(), val) - dorm.begin());
        cout << dorm_no << " " << val - dorm[dorm_no - 1] << endl;
    }

    return 0;
}