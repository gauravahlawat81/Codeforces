#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		bool flag=true;
		for(int i=l+1;i<=r and flag;i++)
		{
			for(int j=i+1;j<=r and flag;j++)
			{
				if(l<=i and j<=r and i!=j and i%j==0)
				{
					cout<<i<<" "<<j<<endl;
					flag=false;
				}
			}
		}
	}
}