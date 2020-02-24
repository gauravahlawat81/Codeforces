#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int a,b;
	cin>>a>>b;
	int arr[n];
	arr[0]=b-a;
	for(int i=1;i<n;i++)
	{
		cin>>a>>b;
		arr[i]=(arr[i-1]-a)+b;
	}
	cout<<*max_element(arr,arr+n);
	cout<<"\n";
	return 0;
}