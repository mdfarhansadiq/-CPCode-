///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

void Ok()
{
    long int a[313],b,c,h,t,i = 0,j = 0,k = 0,l,m,n,lon = 0,loff = 0,hi;
    long int ans_1,ans_2,ans_3,cnt = 0,Max,Min,flag = 0,temp;
    long double aa,bb,cc,dd,ee,ff,gg;
    char aaa[1013],bbb[1013],ccc,ddd;
    string spc,in[113],rev;

    cin>>t;
    while(t--)
    {
        memset(a,0,sizeof(a));
        cin>>n>>c;
        for(i=1; i<=n; i++)
        {
            cin>>b;
            a[b] = 1;
        }
        for(i=1;; i++)
        {
            if(c==0)
                break;
            if(a[i]==0)
            {
                a[i] = 1;
                c--;
            }
        }
        for(i=1; a[i]!=0; i++)
        {
            if(a[i]==1)
                j = i;
        }
        cout<<j<<endl;
    }

    return;
}

int main()
{
    Ok();

    return 0;
}
