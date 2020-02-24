#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	unsigned long long int sum=(n*(n+1))/2;
	if(sum&1)
	{
		cout<<"1\n";
	}
	else
	{
		cout<<"0\n";
	}
	return 0;
}