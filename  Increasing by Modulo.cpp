#include<bits/stdc++.h>
using namespace std;
void change(int arr[],int n,int m)
{
    if(n>=2)
    {
        if(arr[0]>arr[1])
        {
            arr[0]=(arr[0]+1)%m;

        }
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                arr[i]=(arr[i]+1)%m;
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(auto &c:arr)
    {
        cin>>c;
    }
    int count=0;
    while(is_sorted(arr,arr+n)==false)
    {
        change(arr,n,m);
        count++;
    }
    cout<<count<<"\n";
    return 0;

}