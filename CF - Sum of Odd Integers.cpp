///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define INF 999999999;
#define MOD 1000000007;
void Ok()
{
    long long a,b,c,t,i,j,k,l,m,n,Mn,Mx,cnt = 0, ans1, ans2, ans3;
    long double aa, bb, cc;
    char aaa, bbb, ccc;

    cin>>t;
    while (t--)
    {
		cin>>n>>m;
		if((n & 1) && (m & 1))
		{
			ans1 = m * m;
			if(n>=ans1)
				cout<<"YES"<<nl;
			else
				cout<<"NO"<<nl;
		}
		else if(!(n & 1) && !(m & 1))
		{
			ans1 = m * m;
			if(n>=ans1)
				cout<<"YES"<<nl;
			else
				cout<<"NO"<<nl;
		}
		else
			cout<<"NO"<<nl;
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
