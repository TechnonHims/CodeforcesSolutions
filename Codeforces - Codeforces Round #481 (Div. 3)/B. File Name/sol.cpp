#include<bits/stdc++.h>

using namespace std;
// #define int long long;
#define forn(n) for(int i = 0; i < n; ++i)
#define fora(ds) for(auto i : ds)   // ds = data structure
#define coutl cout << endl;
#define mpii map<int, int>
#define mpsi map<string, int>
#define mpint map<int, int>
#define vci vector<int>
#define vcl vector<int>
#define vcs vector<string>
#define paii pair<int, int>
#define vp vector<paii>
#define vc(type) vector<type>


int main(){

    int n;
    cin >> n;
    string str;
    cin >> str;
    int ans = 0;
    forn(n) {
        if (str[i] == 'x') {
            int cnt = 0;
            while (str[i] == 'x') {
                cnt += 1;
                i++;
            }
            if (cnt < 3) {
                ans += 0;
            } else if (cnt == 3) {
                ans += 1;
            } else {
                ans += cnt - 2;
            }
        }
    }
    cout << ans << endl;;
}
