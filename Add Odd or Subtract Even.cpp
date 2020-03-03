#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0\n";
        }
        else if(a>b)
        {
            int res = a-b;
            if(res%2==0)
            {
                cout<<"1\n";
            }
            else
            {
                cout<<"2\n";
            }
        }
        else
        {
            int res = b-a;
            if(res&1)
            {
                cout<<"1\n";
            }
            else
            {
                cout<<"2\n";
            }
            
        }
        
        
    }
    return 0;
}