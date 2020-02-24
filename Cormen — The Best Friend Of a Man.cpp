#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(auto &c:arr)
	{
		cin>>c;
	}
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]+arr[i+1]<k)
		{
			int temp=arr[i+1];
			arr[i+1]+=k-(arr[i]+arr[i+1]);
			count+=arr[i+1]-temp;
		}
	}
	cout<<count<<"\n";
	for(auto c:arr)
	{
		cout<<c<<" ";
	}
	cout<<"\n";
	return 0;
}