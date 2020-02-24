#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int,int> umap;
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(auto &c:arr)
	{
		cin>>c;
	}
	umap[arr[n-1]]=1;
	int result[n+1];
	result[n-1]=1;
	for(int i=n-2;i>=0;i--)
	{
		if(umap[arr[i]])
		{
			result[i]=result[i+1];
		}
		else
		{
			result[i]=1+result[i+1];
			umap[arr[i]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		int l;
		cin>>l;
		cout<<result[l-1]<<"\n";
	}
	return 0;

}