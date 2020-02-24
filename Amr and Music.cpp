#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,days;
	cin>>n>>days;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int instrument_count=0;
	int sum=0;
	sort(arr,arr+n);
	string answer="";
	vector<int> v1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]+sum<=days)
		{
			instrument_count++;
			sum+=arr[i];
			v1.push_back(i);

		}
		else
		{
			break;
		}
	}
	cout<<instrument_count<<endl;
	for(auto i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
}