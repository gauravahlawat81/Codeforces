#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int table[n+1];
	int arr[n];
	for(int i=0;i<=n;i++)
	{
		table[i]=1;
	}
	for(auto &c:arr)
	{
		cin>>c;
	}
	for(int i=n-1;i>=1;i--)
	{
		if(arr[i-1]<=arr[i])
		{
			table[i-1]+=table[i];
		}
	}
	int x=INT_MIN;
	for(int i=0;i<=n;i++)
	{
		if(table[i]>x)
		{
			x=table[i];
		}
	}
	cout<<x<<"\n";
	return 0;

}