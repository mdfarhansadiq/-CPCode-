///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define MOD 1000000007;
void Ok()
{
    long int a,b,c,t,i,j,k,l,m,n,Mn,Mx,cnt = 0, ans1, ans2, ans3;
    long double aa, bb, cc;
    char aaa, bbb, ccc;

    cin>>a>>b;
    if(b==10 && a>=2)
    {
        for(i=1;i<a;i++)
            cout<<"1";
        cout<<"0"<<nl;
        return;
    }
    else if(b==10 && a<2)
    {
        cout<<"-1"<<nl;
        return;
    }
    for(i=1;i<=a;i++)
        cout<<b;
    cout<<nl;

    return;
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    Ok();
    return 0;
}