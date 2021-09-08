///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define MOD 1000000007;
void Ok()
{
    long int a,b,c,t,i,j,k,l,m,n,Mn,Mx,cnt, ans1, ans2, ans3;
    long double aa, bb, cc;
    char aaa, bbb, ccc;

    ans1 = 0;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c;
        ans1 = c%a;
        ans2 = c - ans1;
        if((ans2 + b)<=c)
            cout<<(ans2 + b)<<nl;
        else
            ans2 -= a, cout<<(ans2 + b)<<nl;
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
