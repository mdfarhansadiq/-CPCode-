///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl '\n'
void Ok()
{
    long long int a, b, c, d, e, f, g, h, t, i, j, k, l, m, n, Mn, Mx;
    long long int ans1, ans2, ans3, cnt1, cnt2, cnt3, flag1;
    double aa, bb, cc, dd, ee, ff, gg;
    char aaa, bbb, ccc, ddd;
    string spc, in, keyword;

    fastio;

    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c;
        if(n%a==0 || n%b==0 || n%c==0)
        {
            cout<<"0"<<nl;
            continue;
        }
        ans1 = n%a;
        ans2 = (n - ans1)/a;
        ans3 = abs((a * (ans2 + 1)) - n);
        Mn = ans3;
        ans1 = n%b;
        ans2 = (n - ans1)/b;
        ans3 = abs((b * (ans2 + 1)) - n);
        Mn = min(Mn, ans3);
        ans1 = n%c;
        ans2 = (n - ans1)/c;
        ans3 = abs((c * (ans2 + 1)) - n);
        Mn = min(Mn, ans3);
        cout<<Mn<<nl;

    }

    return;
}

int main()
{
    Ok();

    return 0;
}
