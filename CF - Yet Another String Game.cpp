///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl '\n'

void Ok()
{
    long int a,b,c,d,e,f,g,h,t,i,j,k,l,m,n,Mn,Mx;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa[113],bbb,ccc,ddd;
    string spc,in,keyword,store_1, store_2;

    fastio;

    cin>>t;
    while(t--)
    {
        cin>>aaa;
        l = strlen(aaa);
        for(i=0;i<l;i++)
        {
            if(i%2==0)
            {
                if(aaa[i]=='a')
                    cout<<"b";
                else
                    cout<<"a";
            }
            else if(i%2!=0)
            {
                if(aaa[i]=='z')
                    cout<<"y";
                else
                    cout<<"z";
            }
        }
        cout<<nl;
    }

    return;
}

int main()
{
    Ok();

    return 0;
}
