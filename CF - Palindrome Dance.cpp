///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void Ok()
{
    long int a,b,c[30],t,i,j,k,l,m,n,Mn,Mx,cnt, ans1, ans2, ans3;
    double aa, bb, cc;
    char aaa, bbb, ccc;

    cin>>n>>a>>b;
    for(i=1;i<=n;i++)
        cin>>c[i];
    aa = n/2.0;
    bb = ceil(aa);
    m = bb;
    ans1 = ans2 = 0, ans3 = 1;
    if(n & 1)
    {
        for(i=1,j=n;i<m;i++,j--)
        {
            if((c[i]==0 && c[j]==2) || (c[i]==2 && c[j]==0))
                ans1++;
            else if((c[i]==1 && c[j]==2) || (c[i]==2 && c[j]==1))
                ans2++;
            else if((c[i]==0 && c[j]==1) || (c[i]==1 && c[j]==0))
                ans3 = 0;
            else if(c[i]==2 && c[j]==2)
            {
                if(a<=b)
                    ans1+=2;
                else
                    ans2+=2;
            }
        }
        if(ans3)
        {
            if(c[m]==2)
            {
                if(a<=b)
                    ans1++;
                else
                    ans2++;
            }
            cnt = (ans1 * a) + (ans2 * b);
            cout<<cnt<<nl;
        }
        else
            cout<<"-1"<<nl;
    }
    else
    {
        for(i=1,j=n;i<=m;i++,j--)
        {
            if((c[i]==0 && c[j]==2) || (c[i]==2 && c[j]==0))
                ans1++;
            else if((c[i]==1 && c[j]==2) || (c[i]==2 && c[j]==1))
                ans2++;
            else if((c[i]==0 && c[j]==1) || (c[i]==1 && c[j]==0))
                ans3 = 0;
            else if(c[i]==2 && c[j]==2)
            {
                if(a<=b)
                    ans1+=2;
                else
                    ans2+=2;
            }
        }
        if(ans3)
        {
            cnt = (ans1 * a) + (ans2 * b);
            cout<<cnt<<nl;
        }
        else
            cout<<"-1"<<nl;
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
