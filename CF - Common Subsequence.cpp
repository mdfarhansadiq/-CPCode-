///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

void Ok()
{
    long int a[1013],b[1013],c,d,e,f,g,h,t,i,j,k,l,m,n,Min,Max;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa,bbb,ccc,ddd;
    string spc,in,store;

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1; i<=n; i++)
            cin>>a[i];

        for(i=1; i<=m; i++)
            cin>>b[i];

        flag_1 = 0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(a[i]==b[j])
                {
                    c = a[i];
                    flag_1 = 1;
                    break;
                }
            }
            if(flag_1)
                break;
        }
        if(flag_1)
            cout<<"YES"<<endl,cout<<"1 "<<c<<endl;
        else
            cout<<"NO"<<endl;
    }

    return;
}

int main()
{
    Ok();

    return 0;
}
