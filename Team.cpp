#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int count=0;
	while(t--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		int sum=x+y+z;
		if(sum>=2)
		{
			count+=1;
		}

	}
	cout<<count<<endl;
	return 0;

}