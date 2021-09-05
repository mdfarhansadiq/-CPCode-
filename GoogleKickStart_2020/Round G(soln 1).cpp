///******* In the name of Allah *******///

#include <bits/stdc++.h>
#include <string>
using namespace std;

char aaa[100013];
void Ok()
{
    long int a,b[100013],c[100013],d,e,f,g,h,t,i,j,k,l,m,n,Min,Max;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char bbb,ccc,ddd;
    string spc,in,store;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>t;
    for(k=1; k<=t; k++)
    {
        d = e = 0;
        cin>>aaa;
        l = strlen(aaa);
        for(i=0; i<l; i++)
        {
            if(aaa[i]=='K' && aaa[i+1]=='I' && aaa[i+2]=='C' && aaa[i+3]=='K')
            {
                d++;
                b[d] = i;
            }
        }
        for(i=0; i<l; i++)
        {
            if(aaa[i]=='S' && aaa[i+1]=='T' && aaa[i+2]=='A' && aaa[i+3]=='R' && aaa[i+4]=='T')
            {
                e++;
                c[e] = i;
            }
        }
        cnt_1 = 0;
        for(i=1; i<=d; i++)
        {
            for(j=1; j<=e; j++)
            {
                if(b[i]<c[j])
                    cnt_1++;
            }
        }
        cout<<"Case #"<<k<<": "<<cnt_1<<endl;
    }

    return;
}

int main()
{

    Ok();

    return 0;
}
