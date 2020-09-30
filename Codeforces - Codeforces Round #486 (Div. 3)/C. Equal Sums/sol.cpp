/**
    *      Author : Master_Yash
    *      Time   : 2020-09-19 02:14:38
    **/

#include <algorithm>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#define time cout << (0.1 * clock()) / CLOCKS_PER_SEC << endl;
#define countBits(x) __builtin_popcount(ll(x))
#define countZeroesAtBegin(x) __builtin_clz(ll(x))
#define countZeroesAtEnd(x) __builtin_ctz(ll(x))
#define last(x) x[x.end() - x.begin() - 1]
#define pb push_back
#define bg begin
#define FF first
#define SS second
#define PI 3.1415926535897932384626
#define inf 0x3f3f3f3f
#define infll 0x3f3f3f3f3f3f3f3f
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vll> mat;
const ll MAX = 1e5;
const ll mod = 1000000007;
#define all(x) x.begin(), x.end()
#define rev(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define sortrev(x) sort(rev(x))

// For Loop templates
#define F_OR(i, a, b, s) for (ll i = (a); (s) > 0 ? i < (b) : i >= (b); i += (s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...)       \
    F_ORC(__VA_ARGS__) \
    (__VA_ARGS__)
#define EACH(x, a) for (auto &x : a)
#define itr(it, a) for (auto it = a.begin(); it != a.end(); it++)

// debug templates
#define deb(x) cerr << #x << " : " << x << endl;
#define deb2(x, y) cerr << #x << "=" << x << "," << #y << "=" << y << endl;
#define debArr(A, N)       \
    cerr << #A << " : [ "; \
    FOR(N)                 \
    cerr << A[i] << " ";   \
    cerr << "]\n";
#define deb2DArr(A, N, M)                      \
    cerr << #A << " : \n";                     \
    FOR(N)                                     \
    {                                          \
        cerr << "[ ";                          \
        forkn(j, 0, M) cerr << A[i][j] << " "; \
        cerr << "]\n";                         \
    }
#define debpair(p) cerr << #p << " : " \
                        << "(" << (p).first << "," << (p).second << ")\n";
#define debvector(v)     \
    cerr << #v << " : "  \
         << "[ ";        \
    FOR(v.size())        \
    cerr << v[i] << " "; \
    cerr << "]\n";
#define debmat(v)               \
    cerr << #v << " : \n";      \
    FOR(v.size())               \
    {                           \
        cerr << "[ ";           \
        FOR(j, v[i].size())     \
        cerr << v[i][j] << " "; \
        cerr << "]\n";          \
    }
#define debset(m)                  \
    cerr << #m << " : [ ";         \
    itr(it, m) cerr << *it << " "; \
    cerr << "]\n";
#define debmap(m)                                                     \
    cerr << #m << " : [ ";                                            \
    itr(it, m) cerr << "(" << it->first << "," << it->second << ") "; \
    cerr << "]\n";

ll pow(ll base, ll exp)
{
    base %= mod;
    ll result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}

void solve()
{
    ll N, K;
    cin >> N;
    set<pair<ll, pl>> ans;
    FOR(j, 1, N + 1)
    {
        cin >> K;
        vll v(K);
        ll sum = 0;
        FOR(K)
        {
            cin >> v[i];
            sum += v[i];
        }

        FOR(K)
        {
            ans.insert({sum - v[i], {j, i + 1}});
        }
    }
    bool flag = false;
    pair<ll, pl> prev = *(ans.begin());
    EACH(it, ans)
    {
        if (it == *(ans.begin()))
        {
            continue;
        }
        if (prev.FF == it.FF && (prev.SS.FF != it.SS.FF))
        {
            cout << "YES" << endl;
            cout << prev.SS.FF << " " << prev.SS.SS << endl;
            cout << it.SS.FF << " " << it.SS.SS << endl;
            flag = true;
            break;
        }
        else
        {
            prev = it;
        }
    }
    if (!flag)
    {
        cout << "NO" << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}