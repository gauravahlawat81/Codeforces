#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    vector<int>result;
    for(int i=1;i<=n;i++)
    {
        vector<int>v(i,INT_MIN);
        bool flag=true;
        for(int j=1;j<=n and flag;j++)
        {
            if(v[(j-1)%i]==INT_MIN)
            {
                v[(j-1)%j]=arr[j]-arr[j-1];
            }
            else
            {
                if(v[(j-1)%j]!=arr[j]-arr[j-1])
                {
                    flag=false;
                }

            }
        }
        if(flag)
        {
            result.push_back(i);
        }

    }
    cout<<result.size()<<"\n";
    for(auto c:result)
    {
        cout<<c<<" ";
    }
    cout<<"\n";
    return 0;
}