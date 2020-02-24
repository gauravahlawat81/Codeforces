#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(2*n);
    for(auto &c:v)
    {
        cin>>c;
    }
    sort(v.begin(),v.end());
    int sum1=0;
    int sum2=0;
    for(int i=0,j=(2*n-1);i<n and j>=n;i++,j--)
    {
        sum1+=v[i];
        sum2+=v[j];
    }
    if(sum1==sum2)
    {
        cout<<"-1\n";
        exit(0);
    }
    else
    {
        for(auto c:v)
        {
            cout<<c<<" ";
        }
    }
    cout<<"\n";
    return 0;
    
}