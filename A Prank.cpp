#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &c:arr)
    {
        cin>>c;
    }
    int table[n+1];
    int count=0;
    memset(table,0,sizeof(table));
    if(arr[1]-arr[0]==1)
    {
        count++;
    }
    for(int i=1;i<n-1;i++)
    {
        if((arr[i]-arr[i-1])==1 and (arr[i+1]-arr[i])==1)
        {
            count++;
        }
        
    }
    for(auto c:table)
    {
        //cout<<c<<" ";
    }
    //cout<<"\n";
    cout<<count<<"\n";
    return 0;
}