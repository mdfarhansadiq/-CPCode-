///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a[13],b[13],c,d,e,f,m,n,i,j,k,l,ans_1,ans_2,ans_3,Min_1 = 99999999,Min_2 = 99999999;
    for(i=1; i<=4; i++)
    {
        cin>>a[i];
    }
    cin>>e;
    cin>>f;
    if(e<=f)
    {
        for(i=2; i<=4; i++)
        {
            Min_1 = min(Min_1,a[i]);
        }
        ans_1 = Min_1*f;
        for(i=2; i<=4; i++)
        {
            a[i] = a[i] - Min_1;
        }
        b[1] = a[1];
        b[2] = a[4];
        for(i=1; i<=2; i++)
        {
            Min_2 = min(Min_2,b[i]);
        }
        ans_2 = Min_2*e;
        ans_3 = ans_1 + ans_2;
        cout<<ans_3<<endl;
    }
    else if(e>f)
    {
        b[1] = a[1];
        b[2] = a[4];
        for(i=1; i<=2; i++)
        {
            Min_2 = min(Min_2,b[i]);
        }
        ans_1 = e*Min_2;
        for(i=1; i<=2; i++)
        {
            b[i] = b[i] - Min_2;
        }
        a[4] = b[2];
        for(i=2; i<=4; i++)
        {
            Min_1 = min(Min_1,a[i]);
        }
        ans_2 = Min_1*f;
        ans_3 = ans_1 + ans_2;
        cout<<ans_3<<endl;
    }

    return 0;
}
