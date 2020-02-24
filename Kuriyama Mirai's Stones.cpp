#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr1[n],arr2[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
		arr2[i]=arr1[i];
	}
	sort(arr2,arr2+n);
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int type,l,r;
		cin>>type>>l>>r;
		if(type==1)
		{
			unsigned long long int sum=0;
			for(int i=l-1;i<=r-1;i++)
			{
				sum+=arr1[i];
			}
			cout<<sum<<endl;
		}
		else
		{
			unsigned long long int sum=0;
			for(int i=l-1;i<=r-1;i++)
			{
				sum+=arr2[i];
			}
			cout<<sum<<"\n";
		}
	}
	return 0;
}