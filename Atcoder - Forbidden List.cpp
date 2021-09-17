///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

void Ok()
{
    long int a,b[713],c,t,i,j,k,m,n;
    long int ans_1,ans_2,ans_3,Max,Min;

    memset(b,0,sizeof(b));
    cin>>m>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        b[a] = 1;
    }
    c = m;
    for(i=0; i<=313; i++)
    {
        if(b[i]==0)
        {
            ans_1 = abs(i - m);
            if(Min>ans_1)
            {
                Min = ans_1;
                c = i;
            }
        }
    }
    cout<<c<<endl;

    return;
}

int main()
{
    Ok();

    return 0;
}
