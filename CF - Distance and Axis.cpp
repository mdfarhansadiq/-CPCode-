///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define INF 999999999;
#define MOD 1000000007;
void Ok()
{
    long int a,b,c,d,e,f,t,i,j,k,l,m,n,Mn,Mx,cnt, ans1, ans2, ans3;
    long double aa, bb, cc;
    char aaa, bbb, ccc;

	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a<=b)
			cout<<(b - a)<<nl;
		else if(((a & 1) && (b & 1)) || (!(a & 1) && !(b & 1)))
			cout<<"0"<<nl;
		else
			cout<<"1"<<nl;
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
