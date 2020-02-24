#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int count=0;
	if(a==1 and b==1)
	{
		cout<<"0\n";
		exit(0);
	}
	if(a==2 and b==2)
	{
		cout<<"1\n";
		exit(0);
	}
	while(a>0 and b>0)
	{
		if(a>b)
		{
			b+=1;
			a-=2;
		}
		else
		{
			a+=1;
			b-=2;
		}
		count++;
	}
	cout<<count<<"\n";
	return 0;
}