///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

//long int ar[90013],br[100013];
//long int gcd(long int a, long int b)
//{
//    if(b==0)
//        return a;
//    return gcd(b,a%b);
//}
//long int sieve(long long int a)
//{
//    //long long int i,j,k = 0;
//    memset(ar,0,sizeof(ar));
//    ar[1] = 1;
//    for(i=2; i<=90013; i++)
//    {
//        if(ar[i]==0)
//        {
//            k++;
//            br[k] = i;
//            for(j=i+i; j<=90013; j+=i)
//            {
//                ar[j] = 1;
//            }
//        }
//    }
//    return br[a];
//}

void Ok()
{
    long int a[10013],b[10013],c,d,h,t,i = 0,j = 0,k = 0,l,m,n;
    long int ans_1,ans_2,ans_3,cnt = 0,Max,Min,flag = 1,temp,sum = 0;
    double aa,bb,cc,dd,ee,ff,gg;
    //char aaa[10013],bbb[10013],ccc[113],ddd;
    string spc,in;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=1; j<=n; j++)
            cin>>a[j];
        if(n==1 || n==2)
            cout<<"Case #"<<i<<": 0"<<endl;
        else
        {
            cnt = 0;
            for(j=2; j<n; j++)
            {
                if(a[j]>a[j-1] && a[j]>a[j+1])
                    cnt++;
            }
            cout<<"Case #"<<i<<": "<<cnt<<endl;
        }
    }

    return;
}

int main()
{
    Ok();

    return 0;
}
