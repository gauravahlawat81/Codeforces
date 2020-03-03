#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        vector<int>p(m);
        for(auto &c:arr)
        {
            cin>>c;
        }
        for(int i=0;i<m;i++)
        {
            cin>>p[i];
            p[i]-=1;
        }
        
        sort(p.begin(),p.end());
        // cout<<"P array is \n";
        // for(auto c:p)
        // {
        //     cout<<c<<" ";
        // }
        // cout<<"\n";
        int last = p[0];
        last++;
        vector<pair<int,int> >tosort;
        pair<int,int> lastPair ={p[0],last};
        tosort.emplace_back(lastPair);
        for(int i=1;i<m;i++)
        {
            if(p[i]==lastPair.second)
            {
                lastPair.second = p[i]+1;
                tosort.pop_back();
                tosort.emplace_back(lastPair);
            }
            else
            {
                lastPair = {p[i],p[i]+1};
                tosort.emplace_back(lastPair);
            }
        }
        // cout<<"Range to be sorted\n";
        // for(auto c:tosort)
        // {
        //     cout<<c.first<<" "<<c.second<<"\n";
        // }
        vector<int>copy(n);
        for(int i=0;i<n;i++)
        {
            copy[i]=arr[i];
        }
        for(auto c:tosort)
        {
            vector<int> v;
            for(int i=c.first;i<=c.second;i++)
            {
                v.push_back(copy[i]);
            }
            sort(v.begin(),v.end());
            for(int i=c.first,j=0;i<=c.second;i++,j++)
            {
                copy[i]=v[j];
            }
        }
        // cout<<"Final sorted array \n";
        // for(auto c:copy)
        // {
        //     cout<<c<<" ";
        // }
        //cout<<"\n";
        sort(arr,arr+n);
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(copy[i]!=arr[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
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