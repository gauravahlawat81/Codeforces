#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=++count;
            for(int j=i;j<=n;j+=i)
            {
                arr[j]=arr[i];
            }
        }
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}