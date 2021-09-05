///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl '\n'


void Ok()
{
    long long int a[300013], b, c, d, t, i, j, k, l, m, n, Mn, Mx;
    long long int ans1, ans2, ans3, sum = 0, cnt = 0;
    double aa, bb, cc, dd, ee, ff, gg;
    char aaa, bbb, ccc, ddd;
    string spc, in, keyword, word;

    fastio;

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>a[i];

        ans1 = a[1];
        cout<<ans1<<" ";
        for(i=2;i<=n;i++)
        {
            if(ans1%a[i]==0)
                cout<<ans1<<" ";
            else if(ans1%a[i])
            {
                ans2 = ans1%a[i];
                ans3 = ans1 - ans2;
                b = ans3/a[i];
                b++;
                ans1 = a[i] * b;
                cout<<ans1<<" ";
            }
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
