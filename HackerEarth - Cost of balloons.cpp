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
        ans1 = ans2 = 0;
        cin>>a>>b;
        cin>>c;
        while(c--)
			cin>>m>>n, ans1 += m, ans2 += n;
		
		ans3 = (min(a, b) * max(ans1, ans2)) + (max(a, b) * min(ans1, ans2));
		cout<<ans3<<nl;
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
