void solve()
{
    ll N, k;
    cin >> N >> k;
    map<char, ll> m;
    string str;
    cin >> str;
    FOR(N)
    {
        m[str[i]] += 1;
    }
    // debmap(m);
    auto it = m.begin();
    string res = "";
    while (1)
    {
        if (it->SS >= k)
        {
            ll temp = 0;
            FOR(str.size())
            {
                if (str[i] == it->FF && temp < k)
                {
                    temp += 1;
                    continue;
                }
                else
                {
                    res += str[i];
                }
            }
            break;
        }
        else
        {
            k -= it->SS;
            string temp = "";
            FOR(str.size())
            {
                if (str[i] == it->FF)
                {
                    continue;
                }
                else
                {
                    temp += str[i];
                }
            }
            it++;
            str = temp;
        }
    }
    cout << res << endl;
}