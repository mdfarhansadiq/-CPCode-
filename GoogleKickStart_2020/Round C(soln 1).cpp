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
    long int a[300013],b,c,d,e,h,t,i,j,k,l,m,n;
    long int ans_1,ans_2,ans_3,ans_4,cnt = 0,Max,Min,flag,temp,sum = 0;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa[113],bbb[113],ccc,ddd;
    string spc,in,store[13];

    cin>>t;
    for(k=1; k<=t; k++)
    {
        cin>>n>>m;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        cnt = 0;
        for(i=1; i<=n; i++)
        {
            if(a[i]==m)
            {
                flag = 1;
                for(j=i; j<n; j++)
                {
                    if(a[j]>a[j+1])
                    {
                        flag++;
                        if(flag==m)
                        {
                            cnt++;
                            break;
                        }
                    }
                    else if(a[j]<=a[j+1])
                    {
                        break;
                    }
                }
            }
        }
        cout<<"Case #"<<k<<": "<<cnt<<endl;
    }

    return;
}

int main()
{
    Ok();

    return 0;
}
