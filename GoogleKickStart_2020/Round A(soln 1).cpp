///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

//long long int ar[100013];
//long int gcd(long int a, long int b)
//{
//    if(b==0)
//        return a;
//    return gcd(b,a%b);
//}
//int sieve(long long int a)
//{
//    long long int i,j;
//    memset(ar,0,sizeof(ar));
//    for(i=2; i<=a; i++)
//    {
//        if(ar[i]==0)
//        {
//            for(j=i+i; j<=a; j+=i)
//            {
//                ar[j] = 1;
//            }
//        }
//    }
//    if(ar[a]==0)
//        return 1;
//    else
//        return 0;
//}

void Ok()
{
    long long int a[100013],b,c,d,e,f,g,h,t,i,j,k,l,m,n,r,rcv,lo,hi,mid;
    long long int sum = 0,ans_1,ans_2,ans_3,cnt_1 = 0,cnt_2 = 0,cnt_3 = 0,Max,Min,flag = 0,div,temp;
    long double aa,bb,cc,dd,ee,ff,gg;
    char aaa,bbb,ccc,ddd;
    string spc,in[113],rev;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>b;
        sum = 0;
        cnt_1 = 0;
        for(j=1; j<=n; j++)
        {
            cin>>a[j];
        }
        sort(a+1,a+n+1);
        for(j=1; j<=n; j++)
        {
            if(a[j]<=b)
            {

                cnt_1++;
                b -= a[j];
            }
        }
        cout<<"Case #"<<i<<": "<<cnt_1<<endl;
    }


    return;
}

int main()
{
    Ok();

    return 0;
}
