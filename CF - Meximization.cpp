///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl '\n'
void Ok()
{
    long int a[113], b[113], c, d, e, f, g, h, t, i, j, k, l, m, n, Mn, Mx;
    long int ans_1, ans_2, ans_3, cnt_1, cnt_2, cnt_3, flag_1, flag_2, flag_3, temp, sum;
    double aa, bb, cc, dd, ee, ff, gg;
    char aaa, bbb, ccc, ddd;
    string spc, in, keyword;

    fastio;

    cin>>t;
    while (t--)
    {
        memset(b,0,sizeof(b));
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>a[i];
        
        sort(a+1,a+n+1);
        for(i=1;i<=n;i++)
        {
            if(b[a[i]]==0)
            {
                b[a[i]] = 1;
                cout<<a[i]<<" ";
                a[i] = 150;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]!=150)
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
