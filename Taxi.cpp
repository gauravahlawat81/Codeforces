#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,arr[5];
	int count=0,x=0;
	memset(arr,0,sizeof(arr));
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr[x]++;
	}
	arr[1]=max(arr[1]-arr[3],0);
	cout<<arr[3]+arr[4]+((arr[1]+3+2*arr[2])/4);
	cout<<"\n";
	return 0;


}