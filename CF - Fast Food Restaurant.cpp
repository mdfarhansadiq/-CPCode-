///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

long int gcd(long int a, long int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

void Ok()
{
    long long int a,b,c,d[1013],e,f,g,h,t,s,i,j,k,l1,l2,m,n,r,sum,ans_1,ans_2,ans_3,cnt,Max,Min,flag,div,rcv,temp;
    double aa,bb,cc,dd,ee,tot;
    char aaa[1013],bbb[1013],ccc[1013];

    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cnt = 0;
        if(a>0)
        {
            cnt++;
            a--;
        }
        if(b>0)
        {
            cnt++;
            b--;
        }
        if(c>0)
        {
            cnt++;
            c--;
        }
        d[1] = a;
        d[2] = b;
        d[3] = c;
        sort(d+1,d+3+1);
        if(d[2]>0 && d[3]>0)
        {
            d[2]--;
            d[3]--;
            cnt++;
        }
        if(d[1]>0 && d[2]>0)
        {
            d[1]--;
            d[2]--;
            cnt++;
        }
        if(d[1]>0 && d[3]>0)
        {
            d[1]--;
            d[3]--;
            cnt++;
        }
        if(d[1]>0 && d[2]>0 && d[3]>0)
        {
            cnt++;
        }
        cout<<cnt<<endl;
    }


    return;
}

int main()
{
    Ok();

    return 0;
}
