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
	sort(arr,arr+n);
	int j=0,k=n-1;
	int result[n];bool flag=true;
	for(int i=0;i<n;i++)
	{
		if(flag)
		{
			result[j]=arr[i];
			j++;
			flag=false;
		}
		else
		{
			result[k]=arr[i];
			k--;
			flag=true;
		}
	}
	for(auto c:result)
	{
		cout<<c<<" ";
	}
	cout<<endl;
	return 0;
}