#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long int ;
int main()
{
    ull n,a,b,k;
    cin>>n>>a>>b>>k;
    ull arr[n];
    for(auto &c:arr)
    {
        cin>>c;
    }
    ull sum = a+b;
    int count = 0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%sum==0)
        {
            int step = ceil(double(b)/a);
            v.emplace_back(step);
        }
        else
        {
            int remainder = arr[i]%sum;
            if(remainder>a)
            {
                int hp_left = remainder-a;
                int step = ceil(double(hp_left)/a);
                v.emplace_back(step);
            }
            else
            {
                v.emplace_back(0);
            }
            
            
        }
    }
    ull res = 0;
    sort(v.begin(),v.end());
    for(auto c:v)
    {
        res=res+c;
        if(res<=k)
        {
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;

}