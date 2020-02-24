#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int pos=arr[k-1];
	int count=0;

	for(auto c: arr)
	{
		if(c > 0 && c>=pos)
		{
			count+=1;
		}
	}

	cout<<count<<endl;
	return 0;
}