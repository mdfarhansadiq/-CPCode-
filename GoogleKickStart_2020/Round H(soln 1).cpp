///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

void Ok()
{
    long int a,b,c,d,e,f,g,h,t,i,j,k,l,m,n,Min,Max;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa,bbb,ccc,ddd;
    string spc,in,store;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>a>>b;
        ans_1 = ((a - 1) + 1 + n);
        ans_2 = ((a - 1) + (a - b) + (n - b) + 1);
        Min = min(ans_1,ans_2);
        cout<<"Case #"<<i<<": "<<Min<<endl;
    }

    return;
}

int main()
{
    Ok();

    return 0;
}
