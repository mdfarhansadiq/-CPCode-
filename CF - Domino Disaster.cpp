///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define MOD 1000000007;
void Ok()
{
    long long int a,b,c,t,i,j,k,l,m,n,Mn,Mx,cnt, ans1, ans2, ans3;
    long double aa, bb, cc;
    char aaa[113], bbb, ccc;

    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>aaa;
        for(i=0;i<n;i++)
        {
            if(aaa[i]=='U')
                cout<<"D";
            else if(aaa[i]=='D')
                cout<<"U";
            else
                cout<<aaa[i];
        }
        cout<<nl;
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
