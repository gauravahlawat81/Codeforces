#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
	{
		int l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		if(l1!=r2)
		cout<<l1<<" "<<r2<<endl;
		else
		{
			cout<<l1<<" "<<l2<<endl;
		}	
	}
	return 0;
	
}