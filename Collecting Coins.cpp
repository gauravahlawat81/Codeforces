#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int a,b,c,n;
        cin>>a>>b>>c>>n;
        int first=max({a,b,c,});
        int sum=0;
        sum+=first-a;
        sum+=first-b;
        sum+=first-c;
        //cout<<"Sum is "<<sum<<"\n";
        if(n>=sum and(n-sum==0 or (n-sum)%3==0))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}