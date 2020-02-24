#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,k;
        cin>>n>>k;
        unsigned long long int count = 0;
        while(n!=0)
        {
          count+=n%k;
          n/=k;
          count++;
        }
        cout<<count-1<<"\n";
    }
    return 0;
}