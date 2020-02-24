#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int x=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		x=max(arr[i],x);
	}
	//vector<int> v;
	sort(arr,arr+n);
	for(int i=n-1;i>0;i--)
	{
		if(arr[i]==arr[i-1]||x%arr[i]!=0)
		{
			cout<<arr[i]<<" "<<x<<endl;
			break;		}
	}
	
	
	return 0;
}