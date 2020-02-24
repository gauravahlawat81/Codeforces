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
	int number=1;
	int count=0;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=number)
		{
			number++;
			count++;
		}
	}
	cout<<count<<"\n";
	return 0;
}