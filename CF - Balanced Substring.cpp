///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define MOD 1000000007;
void Ok()
{
    long int a,b,c,t,i,j,k,l,m,n,Mn,Mx = 0,cnt, ans1, ans2, ans3;
    long double aa, bb, cc;
    char aaa[113], bbb, ccc;

    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>aaa;
        ans1 = 0;
        for(i=0;i<(n-1);i++)
        {
            if(aaa[i]!=aaa[i+1])
            {
                cout<<(i + 1)<<" "<<(i + 2)<<nl;
                ans1 = 1;
                break;
            }
        }
        if(!ans1)
            cout<<"-1 -1"<<nl;
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
