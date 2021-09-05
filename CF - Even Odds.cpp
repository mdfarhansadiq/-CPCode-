///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl '\n'

void Ok()
{
    long long int a,b,c,d,e,f,g,h,t,i,j,k,l,m,n,Mn,Mx;
    long long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa[113],bbb,ccc,ddd;
    string spc,in,store;

    fastio;

    cin>>n>>m;
    aa = n/2.0;
    bb = ceil(aa);
    a = bb;
    if(m>a)
        ans_1 = (m - a) + (m - a);
    else
        ans_1 = m + (m - 1);
    cout<<ans_1<<nl;

    return;
}

int main()
{
    Ok();

    return 0;
}
