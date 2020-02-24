#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=i+1;
	}
	while(k--)
	{
		cout<<n--<<" ";
	}
	for(k=1;k<=n;k++)
	{
		cout<<k<<" ";
	}
	cout<<endl;
	return 0;
}