#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int person,budget,hotel,week,price,room,i,j,k,flag,Min,cost,ar[1000];
    while(scanf("%lld %lld %lld %lld",&person,&budget,&hotel,&week)!=EOF)
    {
        cost = 9999999;
        for(i=1; i<=hotel; i++)
        {
            cin>>price;
            for(j=1; j<=week; j++)
            {
                cin>>room;
                if(room>=person)
                {
                    flag = 1;
                }
            }
            if(flag==1)
            {
                ar[i] = person*price;
            }
        }
        for(i=1;i<=hotel;i++)
        {
            if(ar[i]<=cost)
            {
                cost = ar[i];
            }
        }
        if(cost<=budget)
        {
            cout<<cost<<endl;
        }
        else
        {
            cout<<"stay home"<<endl;
        }
    }

    return 0;
}