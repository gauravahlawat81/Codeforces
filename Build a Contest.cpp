#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr1[1000000],arr2[1000000];
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		arr1[x]++;
		arr2[arr1[x]]++;
		if(arr2[arr1[x]]==n)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
	}
	cout<<"\n";
	return 0;
}