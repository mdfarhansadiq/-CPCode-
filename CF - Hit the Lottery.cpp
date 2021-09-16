///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl '\n'
void Ok()
{
    long int a, b, c, t, i, j, k, l, m, n, Mn, Mx;
    long int ans1, ans2, ans3;

    fastio;
    
    ans2 = 0;
    cin>>n;
    while(n)
    {
        if(n>=100)
        {
            ans1 = n%100;
            n -= ans1;
            ans2 += (n/100);
            n = ans1;
        }
        else if(n>=20)
        {
            ans1 = n%20;
            n -= ans1;
            ans2 += (n/20);
            n = ans1;
        }
        else if(n>=10)
        {
            ans1 = n%10;
            n -= ans1;
            ans2 += (n/10);
            n = ans1;
        }
        else if(n>=5)
        {
            ans1 = n%5;
            n -= ans1;
            ans2 += (n/5);
            n = ans1;
        }
        else if(n>=1)
        {
            ans1 = n%1;
            n -= ans1;
            ans2 += (n/1);
            n = ans1;
        }
        
    }
    cout<<ans2<<nl;

    return;
}

int main()
{
    Ok();

    return 0;
}
