#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    bool odd=false;
    bool even=false;
    for(auto &c:arr)
    {
        cin>>c;
        if(c&1)
        {
            odd=true;
        }
        else
        {
            even=true;
        }
        
    }
    if(odd and even)
    {
        sort(arr,arr+n);
    }
    for(auto c:arr)
    {
        cout<<c<<" ";
    }
    cout<<"\n";
    return 0;
}