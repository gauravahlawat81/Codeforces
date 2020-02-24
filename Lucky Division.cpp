#include<bits/stdc++.h>
using namespace std;
bool lucky_number(int n)
{
	bool flag=true;
	while(n && flag)
	{
		int x=n%10;
		if(x==4 || x==7)
		{
			n/=10;
			flag=true;
		}
		else
		{
			flag=false;
		}
	}
	return flag;
}
int main()
{
	ios_base::sync_with_stdio(false);
	int n;cin>>n;
	bool flag=false;
	for(int i=1;i<=n;i++)
	{
		if(lucky_number(i))
		{
			if(n%i==0)
			{
				cout<<"YES\n";
				flag=true;
				break;

			}
		}
	}
	if(flag==false)
	{
		cout<<"NO\n";
	}
	return 0;
}