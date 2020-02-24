#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	ll wait=0;
	ll count=0;
	for(ll i=0;i<n;i++)
	{
		if(wait<=arr[i])
			count++;
		wait+=arr[i];
	}
	cout<<count<<endl;
}