///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl '\n'
void Ok()
{
    long int a, b, c, d, e, f, g, h, t, i, j, k, l, m, n, Mn, Mx;
    long int ans1, ans2, ans3, cnt1, cnt2, cnt3, flag1, flag2, flag3, temp, sum;
    double aa, bb, cc, dd, ee, ff, gg;
    char aaa, bbb, ccc, ddd;
    string spc, in, keyword;

    fastio;

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1 && m>1)
            cout<<(m * m)<<nl;
        else if(n>1 && m==1)
            cout<<"1"<<nl;
        else if(n>=m)
            cout<<m<<nl;
        else
        {
            if(m%n==0)
            {
                ans1 = m/n;
                ans2 = (ans1 * ans1) * n;
                cout<<ans2<<nl;
            }
            else
            {
                ans1 = m%n;
                m -= ans1;
                ans2 = m/n;
                a = n - ans1;
                ans3 = (((ans2 + 1) * (ans2 + 1)) * ans1) + ((ans2 * ans2) * a);
                cout<<ans3<<nl;
            }
        }
    }

    return;
}

int main()
{
    Ok();

    return 0;
}
