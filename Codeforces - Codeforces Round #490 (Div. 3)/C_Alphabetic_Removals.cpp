// #include <algorithm>
// #include <cassert>
// #include <cmath>
// #include <complex>
// #include <cstdio>
// #include <cstdlib>
// #include <cstring>
// #include <ctime>
// #include <iostream>
// #include <map>
// #include <memory>
// #include <queue>
// #include <set>
// #include <stack>
// #include <string>
// #include <utility>
// #include <vector>
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
    ll n, k, count;
    string s, temp;
    cin >> n >> k;
    cin >> s;
    map<char, ll> freq;
    forn(n)
    {
        ++freq[s[i]];
    }
    fora(freq)
    {
        if (i.second >= k)
        {
            i.second -= k;
            k = 0;
            break;
        }
        else
        {
            k -= i.second;
            i.second = 0;
        }
    }
    temp = "";
    forkin(i, n - 1, 0)
    {
        if (freq[s[i]])
        {
            temp += s[i];
            freq[s[i]] -= 1;
        }
    }
    reverse(temp.begin(), temp.end());
    cout << temp << endl;
    return 0;
}