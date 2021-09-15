///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define INF 999999999;
#define MOD 1000000007;
void Ok()
{
    long int a,b,c,t,i,j,k,l,m,n,Mn,Mx,cnt = 0, ans1, ans2, ans3;
    long double aa, bb, cc;
    char aaa, bbb, ccc;
    
    cin>>t;
    while (t--)
    {
        int chk = 0;
        ans2 = ans3 = INF;
        cin>>n>>a>>b>>c;
        if(b>a)
        {
            ans1 = (b - a)%c;
            if(ans1==0)
                ans2 = (b - a)/c, cout<<ans2<<nl;
            else if(ans1)
            {
                aa = c;
                bb = ceil((a - 1)/aa);
                m = bb;
                if((b - 1)%c==0)
                    ans2 = m + ((b - 1)/c), chk = 1;

                bb = ceil((n - a)/aa), m = bb;
                if((n - b)%c==0)
                    ans3 = m + ((n - b)/c), chk = 1;
                if(chk)
                {
                    Mn = min(ans2,ans3);
                    cout<<Mn<<nl;
                    continue;
                }
                cout<<"-1"<<nl;
            }
        }
        else if(a>=b)
        {
            ans1 = (a - b)%c;
            if(ans1==0)
                ans2 = (a - b)/c, cout<<ans2<<nl;
            else if(ans1)
            {
                aa = c;
                bb = ceil((a - 1)/aa);
                m = bb;
                if((b - 1)%c==0)
                    ans2 = m + ((b - 1)/c), chk = 1;

                bb = ceil((n - a)/aa), m = bb;
                if((n - b)%c==0)
                    ans3 = m + ((n - b)/c), chk = 1;
                if(chk)
                {
                    Mn = min(ans2,ans3);
                    cout<<Mn<<nl;
                    continue;
                }
                cout<<"-1"<<nl;
            }
        }
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