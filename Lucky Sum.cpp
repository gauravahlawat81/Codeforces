#include<bits/stdc++.h>
using namespace std;
int lucky(int n)
{
	bool flag=true;
	for(int i=n;;i++)
	{
		int nn=i;
		while(nn)
		{
			int x=nn%10;	
			if(x==4 || x==7)
			{
				nn=nn/10;
			}
			else
			{
				break;
			}
		}
		if(nn==0)
		{
			return i;
		}
	}
}
int main()
{
	int l,r;
	cin>>l>>r;
	unsigned long long int sum=0;
	for(int i=l;i<=r;i++)
	{
		//cout<<"i is "<<i<<endl;
		int x=lucky(i);
		//cout<<"x is"<<x<<endl;
		sum+=x;
	}
	cout<<sum<<endl;
}