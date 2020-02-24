#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll x=n+1;
	ll total=0;
	bool visited[n];
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	for(ll i=1;i<=n;i++)
	{
		ll j=i+1;
		ll min1=((i%x)+(j%x)%x);
		total+=min1;
		visited[i]=true;
		visited[j]=true;
			
	}
	cout<<total<<"\n";
	return 0;

}