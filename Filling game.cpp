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
	int table[n+1];
	memset(table,0,sizeof(table));
	int pos;
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]==0)
		{
			pos=i;
			table[i]++;
			break;
		}
	}
	for(int i=pos-1;i>=0;i--)
	{
		if(arr[i])
		{
			table[i]=max(table[i+1]-1,0);
		}
		else
		{
			table[i]=table[i+1]+1;
		}
	}
	int count=0;
	for(auto c:arr)
	{
		if(c==1)
		{
			count++;
		}
	}
	if(count!=n)
	{
	cout<<*max_element(table,table+n)+count<<"\n";
	}
	else
	{
		cout<<"0\n";
	}
	return 0;


}