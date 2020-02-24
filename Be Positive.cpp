#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin>>n;
	int arr[n];
	int zero=0,positive=0,negative=0;
	for(auto &c:arr)
	{
		cin>>c;
		if(c==0)
		{
			zero++;
		}
		else if(c>0)
		{
			positive++;
		}
		else
		{
			negative++;
		}
	}
	int x;
	if(n%2==0)
	{
		x=n/2;
	}
	else
	{
		x=n/2+1;
	}
	if(positive>=x)
	{
		cout<<"1\n";
	}
	else if(negative>=x)
	{
		cout<<"-1\n";
	}
	else
	{
		cout<<"0\n";
	}
	return 0;
}