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
//long int sieve(long long int a)
//{
//    long long int i,j,k = 0;
//    memset(ar,0,sizeof(ar));
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
//    return ar[a];
//}

void Ok()
{
    long int a[300013],b,c,d,e,f,g,h,t,i,j,k,l,m,n,Min,Max;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa,bbb,ccc,ddd;
    string spc,in,store;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cnt_1 = 0;
        cin>>n;
        for(j=1; j<=n; j++)
            cin>>a[j];

        for(j=1; j<n; j++)
        {
            if(a[j]<a[j+1])
                cnt_1++;
        }
        if(cnt_1==(n-1))
        {
            cout<<"Case #"<<i<<": 1"<<endl;
        }
        else
        {
            cnt_1 = 0;
            Max = a[1];
            for(j=1; j<=n; j++)
            {
                if(j==1)
                {
                    if(a[j]>a[j+1])
                        cnt_1++, Max = a[j];
                }
                else if(j==n)
                {
                    if(Max<a[j])
                        cnt_1++;
                }
                else
                {
                    if(Max<a[j] && a[j]>a[j+1])
                        cnt_1++, Max = a[j];
                }
            }
            cout<<"Case #"<<i<<": "<<cnt_1<<endl;
        }
    }

    return;
}

int main()
{
    Ok();

    return 0;
}
