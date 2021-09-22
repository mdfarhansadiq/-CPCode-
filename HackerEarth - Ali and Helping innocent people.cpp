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
    char aaa[30], bbb, ccc;

	a = 1;
	cin>>aaa;
	l = strlen(aaa);
	for(i=0;i<(l-1);i++)
	{
		if((aaa[i]>='0' && aaa[i]<='9') && (aaa[i+1]>='0' && aaa[i+1]<='9'))
		{
			ans1 = (aaa[i] - 48) + (aaa[i+1] - 48);
			if(ans1 & 1)
			{
				a = 0;
				break;
			}
		}
		else if(aaa[i]=='A' || aaa[i]=='E' || aaa[i]=='I' || aaa[i]=='O' || aaa[i]=='U' || aaa[i]=='Y')
		{
			a = 0;
			break;
		}
	}
	(a)? cout<<"valid"<<nl : cout<<"invalid"<<nl;

    return;
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    Ok();
    return 0;
}
