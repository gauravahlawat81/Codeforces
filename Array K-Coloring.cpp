#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> umap;
unordered_map<int,int> umap2;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		umap[arr[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(umap[arr[i]]>k)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		cout<<i%k+1<<" ";
	}
	cout<<"\n";
	return 0;
}