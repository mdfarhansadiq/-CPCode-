///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define INF 999999999;
#define MOD 1000000007;
void Ok()
{
    long int a[113],b,c,d,e,f,t,i,j,k,l,m,n,Mn,Mx,cnt, ans1, ans2, ans3;
    long double aa, bb, cc;
    char aaa, bbb, ccc;

	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i=1;i<=n;i++)
			cin>>a[i];
			
		Mx = 0;
		for(i=1;i<=n;i++)
		{
			ans1 = 1;
			ans2 = a[i] + m;
			for(j=1;j<=n;j++)
			{
				if(abs(ans2 - a[j])>m)
				{
					ans1 = 0;
					break;
				}
			}
			if(ans1)
				Mx = max(Mx, ans2);
		}
		(Mx)? cout<<Mx<<nl : cout<<("-1")<<nl;
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
