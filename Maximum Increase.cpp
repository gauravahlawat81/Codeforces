#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(auto &c:arr)
	{
		cin>>c;
	}
	int table[n+1];
	//memset(table,1,sizeof(table));
	for(int i=0;i<=n;i++)
	{
		table[i]=1;
	}
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])
		{
			table[i]=table[i-1]+1;
		}
	}
	cout<<*max_element(table,table+n+1);
	cout<<"\n";
	return 0;
}