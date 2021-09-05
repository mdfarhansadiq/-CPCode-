///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

//long int ar[10013];
//long int gcd(long int a, long int b)
//{
//    if(b==0)
//        return a;
//    return gcd(b,a%b);
//}
//void sieve()
//{
//    long long int i,j,k = 0;
//    memset(ar,0,sizeof(ar));+
//    ar[1] = 1;
//    for(i=2; i<=713; i++)
//    {
//        if(ar[i]==0)
//        {
//            for(j=i+i; j<=713; j+=i)
//            {
//                ar[j] = 1;
//            }
//        }
//    }
//}

void Ok()
{
    long int a[200013],b[200013],c,d,e,f,g,h,t,i,j,k,l,m,n,Min,Max;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa[10003],bbb[10003],ccc,ddd;
    string spc,in,store;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        for(j=1; j<=n; j++)
            cin>>a[j];
        k = 0;
        if(n==2)
        {
            cout<<"Case #"<<i<<": 2"<<endl;
            continue;
        }
        for(j=1;j<n;j++)
        {
            ans_1 = a[j] - a[j + 1];
            k++;
            b[k] = ans_1;
        }
        cnt_1 = 1;
        Max = 0;
        for(j=1;j<k;j++)
        {
            if(b[j]==b[j+1])
            {
                cnt_1++;
                Max = max(Max,cnt_1);
            }
            else
            {
                Max = max(Max,cnt_1);
                cnt_1 = 1;
            }
        }
        ans_1 = Max + 1;
        cout<<"Case #"<<i<<": "<<ans_1<<endl;
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
