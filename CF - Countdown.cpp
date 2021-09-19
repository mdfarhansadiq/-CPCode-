///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define INF 999999999;
#define MOD 1000000007;
void Ok()
{
    long int a,b,c,d,t,i,j,k,l,m,n,Mn,Mx,cnt, ans1, ans2, ans3;
    long double aa, bb, cc;
    char aaa[1013], bbb, ccc;
	string word;
    
    cin>>t;
    while(t--)
    {
		cin>>n;
		for(i=1;i<=n;i++)
			cin>>aaa[i];
		
		cnt = ans2 = 0;
		if(aaa[n]!='0')
		{
			for(i=1;i<=n;i++)
			{
				ans1 = aaa[i] - 48;
				if(ans1)
					cnt++;
				ans2 += ans1;
			}
			ans2 += (cnt - 1);
		}
		else if(aaa[n]=='0')
		{
			for(i=1;i<=n;i++)
			{
				ans1 = aaa[i] - 48;
				if(ans1)
					cnt++;
				ans2 += ans1;
			}
			ans2 += cnt;
		}
		cout<<ans2<<nl;
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
