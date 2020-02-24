#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int min1=1000000;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<min((arr[n-1]-arr[1]),(arr[n-2]-arr[0]))<<endl;

}