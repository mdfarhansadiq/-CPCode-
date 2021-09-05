#include<iostream>
using namespace std;
int main()
{
    string a;
    int i;
    for(i=1;;i++)
    {
        if(a=="*")
        {
            break;
        }
        cin>>a;
        if(a=="Hajj")
        {
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        }
        else if(a=="Umrah")
        {
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
        }
    }

    return 0;
}