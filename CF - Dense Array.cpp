///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl '\n'

void Ok()
{
    long int a[113],b,c,d,e,f,g,h,t,i,j,k,l,m,n,Mn,Mx;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa,bbb,ccc,ddd;
    string spc,in,keyword,store_1, store_2;

    fastio;

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>a[i];

        cnt_1 = 0;
        for(i=1;i<n;i++)
        {
            if(a[i]<a[i+1] && (a[i]*2)<a[i+1])
            {
                m = a[i];
                while(1)
                {
                    ans_2 = m + m;
                    if(ans_2>=a[i+1])
                        break;
                    else
                        m += m, cnt_1++;
                }
            }
            else if(a[i]>a[i+1] && (a[i+1]*2)<a[i])
            {
                m = a[i+1];
                while(1)
                {
                    ans_2 = m + m;
                    if(ans_2>=a[i])
                        break;
                    else
                        m += m, cnt_1++;
                }
            }
        }
        cout<<cnt_1<<nl;
    }

    return;
}

int main()
{
    Ok();

    return 0;
}
