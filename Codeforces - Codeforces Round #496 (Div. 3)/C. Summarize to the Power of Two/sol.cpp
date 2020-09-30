#include <bits/stdc++.h>
// #include <stdio.h>
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

bool power_2(ll num)
{
    if (num == 0)
        return true;
    while (!(num & 1))
        num >>= 1;
    if (num == 1)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // ll n, m = 0;
    ll n, count, m, remove;
    cin >> n;
    vcl ar(n), temp;
    vcl final_ar;

    forn(n) cin >> ar[i]; // input

    sort(ar.begin(), ar.end());

    // final_ar.emplace_back(ar[0]);
    m = 1;
    remove = n - m;

    bool flag;
    forn(n)
    {
        ll start = ar[i];
        temp.emplace_back(start);

        forkn(j, 0, 31)
        {
            ll right = start + (1 << j);
            if (binary_search(ar.begin(), ar.end(), right))
            {
                flag = false;
                forkn(k, 1, temp.size())
                {
                    if (__builtin_popcount(temp[k] + right) == 1)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    temp.emplace_back(right);
            }
        }

        if (temp.size() > m)
        {
            final_ar.swap(temp);
            m = temp.size();
            remove = n - m;
            fora(final_ar) couts(i);
            coutl;
        }

        // count = 0;
        temp.clear();
    }

    cout << remove;
    // if (count < 2)
    //     cout << 0;

    // cout << final_ar.size() << endl;
    // fora(final_ar) couts(i);

    return 0;
}