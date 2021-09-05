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
//}

void Ok()
{
    long int a,b,c,d,e,f,g,h,t,i,j,k,l,m,n,Min,Max;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa,bbb,ccc,ddd;
    string spc,in,store;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <pair <long int, long int> > vt;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>m;
        aa = m;
        for(j=1; j<=n; j++)
        {
            cin>>a;
            bb = a/aa;
            cc = ceil(bb);
            b = cc;
            vt.push_back(make_pair(b,j));
        }
        sort(vt.begin(),vt.end());
        cout<<"Case #"<<i<<": ";
        for(j=0; j<n; j++)
            cout<<vt[j].second<<" ";

        cout<<endl;

        vt.clear();
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
