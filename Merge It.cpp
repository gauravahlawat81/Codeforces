#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int count=0;
        unordered_map<int,int>umap;
        for(auto &c:arr)
        {
            cin>>c;
            if(c%3==0)
            {
                count++;
            }
            else
            {
                umap[c%3]++;
            }
            
        }
        int mini=min(umap[1],umap[2]);
        int maxi;
        if(mini==umap[1])
        {
             maxi=umap[2];
        }
        else
        {
            maxi=umap[1];
        }
        count+=mini;
        maxi-=mini;
        if(maxi!=0)
        {
            count+=(maxi/3);
        }
        cout<<count<<"\n";
    }
    return 0;
    
}