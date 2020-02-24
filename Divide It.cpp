#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int ll;
        cin>>ll;
        int count=0;
        while(ll%2==0 or ll%3==0 or ll%5==0)
        {
            if(ll%2==0)
            {
                ll=ll/2;
                count++;
            }
            else if(ll%3==0)
            {
                ll=((ll/3)*2);
                count++;
            }
            else if(ll%5==0)
            {
                ll=((ll/5)*4);
                count++;
            }
        }
        if(ll==1)
        {
            cout<<count<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
        
    }
    return 0;
}