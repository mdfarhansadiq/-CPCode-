///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
long int a[30];
char aaa[1000013], bbb[1000013];
void Ok()
{
    long int b,c,t,i,j,k,l,m,n,Mn,Mx,cnt, ans1, ans2, ans3;
    double aa, bb, cc;

    cin>>aaa;
    l = strlen(aaa);
    for(i=0;i<l;i++)
        ans1 = aaa[i] - 64, a[ans1]++;
    ans2 = 0;
    for(i=1;i<=26;i++)
    {
        if(a[i] & 1)
            ans2++;
    }
    if(ans2>=2)
        cout<<"NO SOLUTION"<<nl;
    else
    {
        if(l & 1)
        {
            b = 0, c = l+1;
            for(i=1;i<=26;i++)
            {
                if(!(a[i] & 1))
                {
                    while (a[i])
                    {
                        b++, c--;
                        bbb[b] = bbb[c] = (i + 64);
                        a[i] -= 2;
                    }
                }
            }
            for(i=1;i<=26;i++)
            {
                if((a[i] & 1))
                {
                    while (a[i])
                    {
                        b++, c--;
                        bbb[b] = bbb[c] = (i + 64);
                        a[i]--;
                    }
                }
            }
        }
        else
        {
            b = 0, c = l+1;
            for(i=1;i<=26;i++)
            {
                if(!(a[i] & 1))
                {
                    while (a[i])
                    {
                        b++, c--;
                        bbb[b] = bbb[c] = (i + 64);
                        a[i] -= 2;
                    }
                }
            }
        }
        for(i=1;i<=l;i++)
            cout<<bbb[i];
        cout<<nl;
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
