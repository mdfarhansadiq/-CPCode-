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
    char aaa[113], bbb, ccc;
	
	cin>>aaa;
	l = strlen(aaa);
	for(i=0;i<l;i++)
	{
		if(aaa[i]>='A' && aaa[i]<='Z')
			aaa[i] += 32;
		else if(aaa[i]>='a' && aaa[i]<='z')
			aaa[i] -= 32;
		
		cout<<aaa[i];
	}
	cout<<nl;

    return;
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    Ok();
    return 0;
}
