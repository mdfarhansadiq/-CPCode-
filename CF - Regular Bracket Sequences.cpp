///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define INF 999999999;
#define MOD 1000000007;
void Ok()
{
    long int a,b,c,d,e,t,i,j,k,l,m,n,Mn,Mx,cnt, ans1, ans2, ans3;
    long double aa, bb, cc;
    char aaa, bbb, ccc;

    
    cin>>t;
    while(t--)
    {
		cin>>n;
		for(i=1;i<=n;i++)
		{
			if(i!=1)
			{
				ans1 = n - i;
				for(j=1;j<=i;j++)
					cout<<"(";
				for(j=1;j<=i;j++)
					cout<<")";
				cout<<"";
				for(j=1;j<=ans1;j++)
					cout<<"()";
				cout<<nl;
			}
			else
			{
				for(j=1;j<=n;j++)
					cout<<"()";
				cout<<nl;
			}
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
