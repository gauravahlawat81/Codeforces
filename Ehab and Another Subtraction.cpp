#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
	int n,k;
	ll arr[n];
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	ll size=sizeof(arr)/sizeof(arr[0]);
	while(k--)
	{
		bool flag=true;
		sort(arr,arr+size);
		for(int i=0;i<n and flag!=false;i++)
		{
			if(arr[i]>0)
			{
				cout<<arr[i]<<"\n";
				flag=false;
			}
		}
		if(flag==true)
		{
			cout<<arr[0]<<"\n";
		}
		

		for(int i=0;i<n;i++)
		{
			arr[i]=arr[i]-arr[0];
		}
		
	}
	return 0;
}