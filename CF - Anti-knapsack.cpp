///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl '\n'

void Ok()
{
    long int a[1013], b, c, d, e, f, g, h, t, i, j, k, l, m, n, Mn, Mx;
    long int ans_1, ans_2, ans_3, cnt_1, cnt_2, cnt_3, flag_1, flag_2, flag_3, temp, sum;
    double aa, bb, cc, dd, ee, ff, gg;
    char aaa, bbb, ccc, ddd;
    string spc, in, keyword;

    fastio;

    cin>>t;
    while (t--)
    {
        memset(a,0,sizeof(a));
        cin>>n>>m;
        for(i=1;i<=n;i++)
            a[i] = i;
        a[m] = cnt_1 = 0;
        aa = (m)/2.0;
        bb = ceil(aa);
        b = bb;
        for(i=b;i<=n;i++)
        {
            if(a[i])
                cnt_1++;
        }
        cout<<cnt_1<<nl;
        for(i=b;i<=n;i++)
        {
            if(a[i])
                cout<<a[i]<<" ";
        }
        cout<<nl;
    }

    return;
}

int main()
{
    Ok();

    return 0;
}
