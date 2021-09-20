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
    char aaa[500013], bbb, ccc;
    
    cin>>t;
    for(int test=1;test<=t;test++)
    {
		cin>>n;
		for(i=1;i<=n;i++)
			cin>>aaa[i];
		
		cnt = 0;
		int Start = ans1 = 0;
		for(i=1;i<=n;i++)
		{
			if(i==1 && aaa[i]=='0')
				cnt++, Start = 0;
			else if(i==1 && aaa[i]=='1')
				Start = 1, cnt = 0;
			else if(i!=1 && aaa[i]=='1')
			{
				if(!Start)
					ans1 += ((cnt * (cnt + 1))/2), Start = 1, cnt = 0;
				else if(Start)
				{
					if(cnt & 1)
					{
						aa = cnt/2.0;
						bb = ceil(aa);
						a = bb;
						b = ((a * (a + 1))/2) + (((a - 1) * a)/2);
						ans1 += b;
					}
					else if(!(cnt & 1))
					{
						aa = cnt/2.0;
						bb = ceil(aa);
						a = bb;
						b = ((a * (a + 1))/2) + (((a + 1) * a)/2);
						ans1 += b;
					}
					cnt = 0, Start = 1;
				}
			}
			else if(i!=1 && i!=n && aaa[i]=='0')
				cnt++;
			else if(i==n && aaa[i]=='0')
				cnt++, ans1 += ((cnt * (cnt + 1))/2);
		}
		cout<<"Case #"<<test<<": "<<ans1<<nl;
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
