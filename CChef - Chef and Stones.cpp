///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define MOD 1000000007;
void Ok()
{
    long int a[100013],b[100013],c,t,i,j,k,l,m,n,Mn,Mx,cnt, ans1, ans2, ans3;
    long double aa, bb, cc;
    char aaa, bbb, ccc;
    
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n;i++)
            cin>>b[i];
        Mx = 0;
        for(i=1;i<=n;i++)
        {
            ans1 = m/a[i];
            ans2 = ans1 * b[i];
            Mx = max(Mx, ans2);
        }
        cout<<Mx<<nl;
    }

    return;
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    Ok();
    return 0;
}
