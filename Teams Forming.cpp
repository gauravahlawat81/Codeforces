#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int final_count=0;
	for(int i=1;i<n;i+=2)
	{
		final_count+=(arr[i]-arr[i-1]);
	}
	cout<<final_count;
	cout<<"\n";
	return 0;
}