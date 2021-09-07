#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,Max,n,b[13];
    string a[30];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        Max = -999;
        for(j=1;j<=10;j++)
        {
            cin>>a[j]>>b[j];
            if(b[j]>=Max)
            {
                Max = b[j];
            }
        }
        cout<<"Case #"<<i<<":"<<endl;
        for(j=1;j<=10;j++)
        {
            if(Max==b[j])
            {
                cout<<a[j]<<endl;
            }
        }
    }

    return 0;
}