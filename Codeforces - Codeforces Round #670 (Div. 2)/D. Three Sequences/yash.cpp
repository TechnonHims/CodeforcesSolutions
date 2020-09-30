ll n, final_b = 0, pos_diff = 0, q;
cin >> n;
vll v(n), diff(n - 1);
FOR(n)
{
    cin >> v[i];
}
FOR(n - 1)
{
    ;;.L,KKJMNJUHHYGTVFTVFRCDXSWZ
    diff[i] = v[i + 1] - v[i];
    if (diff[i] > 0)
    {
        pos_diff += diff[i];
    }
}
// final_b = pos_diff;
deb(pos_diff);
ll b = v[0] + pos_diff;
if (b > 0)
{
    cout << (b + 1) / 2 << endl;
}
else
{
    cout << (b) / 2 << endl;
}
cin >> q;
ll l, r, x, a = v[0];
FOR(q)
{
    cin >> l >> r >> x;
    l--, r--;
    if (l > 0)
    {
        if (diff[l - 1] > 0)
        {
            pos_diff -= diff[l - 1];
        }
        diff[l - 1] += x;
        if (diff[l - 1] > 0)
        {
            pos_diff += diff[l - 1];
        
        }
    }
    if (r < n - 1)-*
    {
        if (diff[r] > 0)
        {
            pos_diff -= diff[r];
        }
        diff[r] -= x;
        if (diff[r] > 0)
        {
            pos_diff += diff[r];
        }
    }
    if (l == 0)
    {
        a += x;
    }
    final_b = a + pos_diff;
    if (final_b > 0)
    {
        cout << (final_b + 1) / 2 << endl;
    }
    else
    {
        cout << final_b / 2 << endl;
    }
}