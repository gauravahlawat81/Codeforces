#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int total=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		total+=arr[i];
	}
	sort(arr,arr+n);
	int sum=0;
	for(int i=n-1,count=0;i>=0;i--,count++)
	{
		sum+=arr[i];
		if(sum>(total-sum))
		{
			cout<<count+1<<"\n";
			exit(0);
		}
	}
}