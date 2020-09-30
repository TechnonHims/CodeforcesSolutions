#include <iostream>

using namespace std;

int main()
{

    return 0;
}
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

// n = int(input())
// a = [int(x) for x in input().split()]
// d = set()
// d.add(0)
// cur = 0
// ans = 0
// for i in range(n):
// 	cur += a[i]
// 	if cur in d:
// 		ans += 1
// 		d = set()
// 		d.add(0)
// 		cur = a[i]
// 	d.add(cur)
// print(ans)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, sum, ele_insert, pos;
    cin >> n;

    vcl ar(n);

    forn(n) cin >> ar[i];

    set<int> s;
    s.insert(0);
    sum = 0;
    ele_insert = 0;
    pos = 0;
    forn(n)
    {
        sum += ar[i];
        if (s.find(sum) != s.end())
        {
            ++ele_insert;
            s.clear();
            s.insert(0);
            sum = ar[i];
        }
        s.insert(sum);
    }

    cout << ele_insert;

    return 0;
}