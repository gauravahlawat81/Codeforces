#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[m];
	for(int i=0;i<m;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+m);
	int minimum=arr[n-1]-arr[0];
	for(int i=1,j=n;j<m;i++,j++)
	{
		if((arr[j]-arr[i])<minimum)
		{
			minimum=arr[j]-arr[i];
		}
	}
	cout<<minimum<<"\n";
	return 0;
}