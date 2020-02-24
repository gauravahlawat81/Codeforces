#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the array:\t";
	cin>>n;
	int arr[n];
	cout<<"Enter the "<<n<<" elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int res=arr[0];
	for(int i=0;i<n;i++)
	{
		res=__gcd(arr[i],res);
	}
	cout<<"GCD is "<<res<<endl;
}